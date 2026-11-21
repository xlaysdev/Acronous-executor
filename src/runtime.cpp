#include "acronous/runtime.hpp"

#include <Luau/Compiler.h>
#include <lua.h>
#include <lualib.h>

#include <exception>
#include <sstream>
#include <string>

namespace acronous {
namespace {

int capturePrint(lua_State* state) {
    auto* output = static_cast<std::ostringstream*>(lua_touserdata(state, lua_upvalueindex(1)));
    const int count = lua_gettop(state);

    for (int i = 1; i <= count; ++i) {
        if (i > 1)
            *output << '\t';

        size_t length = 0;
        const char* value = luaL_tolstring(state, i, &length);
        if (value)
            output->write(value, static_cast<std::streamsize>(length));
        lua_pop(state, 1);
    }

    *output << '\n';
    return 0;
}

} // namespace

ExecutionResult Runtime::execute(const std::string& source) const {
    ExecutionResult result;
    std::ostringstream captured;

    lua_State* state = luaL_newstate();
    if (!state) {
        result.error = "Failed to create Luau state";
        return result;
    }

    luaL_openlibs(state);

    lua_pushlightuserdata(state, &captured);
    lua_pushcclosure(state, capturePrint, "print", 1);
    lua_setglobal(state, "print");

    try {
        const std::string bytecode = Luau::compile(source);
        const int loadStatus = luau_load(state, "acronous-input", bytecode.data(), bytecode.size(), 0);

        if (loadStatus != 0) {
            const char* message = lua_tostring(state, -1);
            result.error = message ? message : "Unknown Luau compile/load error";
        } else {
            const int callStatus = lua_pcall(state, 0, LUA_MULTRET, 0);
            if (callStatus != 0) {
                const char* message = lua_tostring(state, -1);
                result.error = message ? message : "Unknown Luau runtime error";
            } else {
                result.success = true;
            }
        }
    } catch (const std::exception& exception) {
        result.error = exception.what();
    }

    result.output = captured.str();
    lua_close(state);
    return result;
}

} // namespace acronous

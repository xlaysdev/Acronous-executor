#pragma once

#include <string>

namespace acronous {

struct ExecutionResult {
    bool success = false;
    std::string output;
    std::string error;
};

class Runtime {
public:
    ExecutionResult execute(const std::string& source) const;
};

} // namespace acronous

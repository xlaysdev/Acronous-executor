#include "acronous/runtime.hpp"

#include <iostream>
#include <string>

int main() {
    acronous::Runtime runtime;

    const auto success = runtime.execute("print('Acronous test OK')");
    if (!success.success || success.output.find("Acronous test OK") == std::string::npos) {
        std::cerr << "Basic execution test failed: " << success.error << '\n';
        return 1;
    }

    const auto failure = runtime.execute("error('expected test error')");
    if (failure.success || failure.error.empty()) {
        std::cerr << "Runtime error test failed\n";
        return 1;
    }

    std::cout << "All Acronous tests passed\n";
    return 0;
}

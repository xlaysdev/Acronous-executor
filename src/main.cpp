#include "acronous/runtime.hpp"

#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

int main(int argc, char** argv) {
    std::string source;

    if (argc > 2) {
        std::cerr << "Usage: acronous [script.luau]\n";
        return 2;
    }

    if (argc == 2) {
        std::ifstream file(argv[1], std::ios::binary);
        if (!file) {
            std::cerr << "Could not open script: " << argv[1] << '\\n';
            return 2;
        }
        source.assign(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
    } else {
        source.assign(std::istreambuf_iterator<char>(std::cin), std::istreambuf_iterator<char>());
    }

    acronous::Runtime runtime;
    const auto result = runtime.execute(source);

    std::cout << result.output;
    if (!result.success) {
        std::cerr << "Execution failed: " << result.error << '\\n';
        return 1;
    }

    return 0;
}

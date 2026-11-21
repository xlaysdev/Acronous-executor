# Acronous Executor

Acronous Executor is an **offline, standalone Luau execution sandbox** for learning about Luau embedding, compiler/runtime integration, and software testing.

It does not attach to Roblox, inject into another process, read or write another process's memory, or bypass anti-cheat systems. Scripts run only inside the local Luau VM created by this application.

## Features

- Standalone Luau VM embedding
- Compile and execute Luau source from a file or standard input
- Runtime error reporting
- CMake build system
- GitHub Actions CI for Windows, Linux, and macOS
- Automated runtime tests

## Requirements

- CMake 3.20+
- C++17 compiler
- Git
- Internet access on first configure/build (CMake fetches official Luau source)

## Build

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
ctest --test-dir build --output-on-failure
```

## Run

```bash
./build/acronous examples/hello.luau
```

Or pass source through standard input:

```bash
echo 'print("Hello from Acronous")' | ./build/acronous
```

On Windows with a multi-configuration generator, the executable is typically in `build/Release/`.

## GitHub Actions

The workflow at `.github/workflows/ci.yml` builds and tests the project on Ubuntu, Windows, and macOS for pushes and pull requests.

## Project layout

```text
Acronous-Executor/
├── .github/workflows/ci.yml
├── examples/hello.luau
├── include/acronous/runtime.hpp
├── src/main.cpp
├── src/runtime.cpp
├── tests/runtime_tests.cpp
├── .gitignore
├── CMakeLists.txt
└── README.md
```

## License

MIT. See [LICENSE](LICENSE).

## Credits

Luau is developed by Roblox. This project fetches Luau from the official [luau-lang/luau](https://github.com/luau-lang/luau) repository at configure time.

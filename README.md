# lox

[![C++23](https://img.shields.io/badge/C%2B%2B-23-green.svg)](https://isocpp.org/std/the-standard)

My implementation of exercises from fantastic book
["Crafting interpreters"](https://craftinginterpreters.com/) by Robert Nystrom.

## Project structure

```text
├── src                           # source code
│
├── test                          # unit-tests
│
├── .gitignore
├── .clang-format
├── .clang-tidy
├── .pre-commit-config.yaml
│
├── CMakeLists.txt                # main cmake entrypoint
│
├── Makefile                      # additional handy commands for convenience
└── README.md
```

## Build

1. Generate build routine.
   E.g. for macOS:

   ```bash
   cmake \
       -B build \
       -DCMAKE_BUILD_TYPE=Debug \
       -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
       -DCMAKE_OSX_SYSROOT=macosx
   ```

1. Build the project:

   ```bash
   cmake --build build --parallel $(nproc --ignore=1)
   ```

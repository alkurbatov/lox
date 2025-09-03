set(sources
  main.cpp
)

add_executable(lox ${sources})

target_compile_options(lox PRIVATE -Wall -Wextra -pedantic)

#include <exception>
#include <iostream>
#include <print>

auto main() -> int
{
    try
    {
        std::println("Hello world!");
    }
    catch (std::exception& err)
    {
        std::cerr << "an unexpected error occurred: " << err.what() << '\n';
        return 1;
    }

    return 0;
}

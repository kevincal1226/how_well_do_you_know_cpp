#include <print>

auto main() -> int {
    int32_t x[5] = { 0, 1, 2, 3, 4 };

    std::println("{}",
                 (size_t) (&x + 1)
                   - (size_t) (x));   // this prints 20, because it's taking the address of an array of size 20 bytes
    std::println("{}", (size_t) (x + 1) - (size_t) (x));   // this prints 4, trivially
}

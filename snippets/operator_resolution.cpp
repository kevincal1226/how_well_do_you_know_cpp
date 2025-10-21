#include <print>

auto foo(void*) {
    std::println("Void*");
}

auto foo(char*) {
    std::println("Char*");
}

auto main() -> int {
    // foo(27) will not compile
    int a = 0;
    foo(&a);   // will print Void*
}

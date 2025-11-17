#include <print>

struct Base {
    int a;
    int b;
};

struct Child : public Base {
    int c;
};

auto main() -> int {
    Child c1 { 1, 2, 3 };
    Child c2 { 4, 5, 6 };

    Base& b = c1;
    // slices c2 to Base, so we only set (a, b) of c1, leaving c unchanged
    b = c2;

    // prints 4 5 3 due to slicing
    std::println("{} {} {}", c1.a, c1.b, c1.c);
}

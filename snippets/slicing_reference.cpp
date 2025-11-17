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
    b = c2;

    std::println("{} {} {}", c1.a, c1.b, c1.c);
}

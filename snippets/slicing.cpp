#include <print>
class A {
public:
    A() = default;
    virtual auto foo() -> void { std::println("A"); }
};

class B : public A {
public:
    B() = default;
    auto foo() -> void override { std::println("B"); }
};

auto foo(A* a) {
    a->foo();
}

auto foo(A a) {
    a.foo();
}

auto main() -> int {
    B b {};
    foo(&b);   // will use B's override foo
    foo(b);    // will slice B, and use A's foo
    return 0;
}

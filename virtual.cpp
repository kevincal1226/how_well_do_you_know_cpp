#include <print>

class A {
public:
    int x;
    A(int a)
        : x(a) {
        std::print("{}", a);
    }
};

class B : virtual public A {
public:
    B(int b)
        : A(b) {
        std::print("{}", b);
    }
};


class C : virtual public A {
public:
    int x;
    C(int c)
        : A(c)
        , x(c) {
        std::print("{}", c);
    }
};

class D
    : public B
    , public C {
public:
    D()
        : C(2)
        , B(1)
        , A(0) {
        std::print("D");
    }
};

auto main() -> int {
    D d;
    std::println("{}", d.x);
    int x = 4;
    int y = 1;
    int z = x++ + ++y;
    std::println("{}", z);
}

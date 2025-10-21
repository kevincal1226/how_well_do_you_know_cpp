class A {
    A(int z);
    A(int a, int b);
    void foo(int x, int y);
};

A::A(int z = 0) {}   // you must have the default argument in the declaration for a "default" constructor
A::A(int a, int b = 0) {}
void A::foo(int x, int y = 0) {}

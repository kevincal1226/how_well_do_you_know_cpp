#include <print>
auto main() -> int {
    char a = 1;
    char b = 2;
    auto x = a + b;   // auto infers type int
    std::println("{}", typeid(x).name());
    return 0;
}

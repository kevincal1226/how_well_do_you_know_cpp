#include <print>

namespace {
template <typename... Args>
auto tuple_sum(Args... args) {
    using T = std::common_type_t<Args...>;
    T acc {};
    ((acc += args), ...);   // this will apply acc += args for each arg
    std::println("{}", acc);
}
}   // namespace


auto main() -> int {
    using T = decltype(std::println("hi"),
                       "no");   // this will not print "hi", as decltype only analyzes the parameter, not execute it
    std::println("{}", typeid(T).name());
    auto int_tup = std::make_tuple(1.0, 2.0, 3.5, 4.0, 5.0);
    std::apply([](auto&&... args) { tuple_sum(args...); }, int_tup);
}

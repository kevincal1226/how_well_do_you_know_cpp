#include <exception>
#include <print>
#include <stdexcept>

class ThrowWhenDie {
public:
    ThrowWhenDie() = default;
    ~ThrowWhenDie() { throw std::runtime_error("Destruct me daddy"); }
};

auto thrower() {
    ThrowWhenDie d {};
    throw std::runtime_error("runtime error");
}

auto main() -> int {
    try {
        thrower();
    } catch (const std::exception&) {
        std::println("caught that boy");
    }
    return 0;
}

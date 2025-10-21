#include <algorithm>
#include <print>
#include <vector>
auto main() -> int {
    std::vector<int> nums { 0, 0, 0, 0, 0 };
    std::vector<int> ret;
    int i = 0;
    std::ranges::transform(nums, std::back_inserter(ret), [i](int m) mutable { return m + i++; });   // mutable lambda
    std::println("{}", ret);
    std::println("{}", i);   // prints 0
}

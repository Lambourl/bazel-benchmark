#include "bench/fib.hpp"

// RE Benchmark TU 4816 of 20000 (depth=28, stamp="default")
namespace bench_tu_4816 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4816>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4816

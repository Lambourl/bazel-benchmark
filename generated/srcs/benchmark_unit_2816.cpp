#include "bench/fib.hpp"

// RE Benchmark TU 2816 of 20000 (depth=28, stamp="default")
namespace bench_tu_2816 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2816>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2816

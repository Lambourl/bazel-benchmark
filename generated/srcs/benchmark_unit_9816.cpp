#include "bench/fib.hpp"

// RE Benchmark TU 9816 of 20000 (depth=28, stamp="default")
namespace bench_tu_9816 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9816>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9816

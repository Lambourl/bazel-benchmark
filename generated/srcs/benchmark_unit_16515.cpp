#include "bench/fib.hpp"

// RE Benchmark TU 16515 of 20000 (depth=28, stamp="default")
namespace bench_tu_16515 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16515>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16515

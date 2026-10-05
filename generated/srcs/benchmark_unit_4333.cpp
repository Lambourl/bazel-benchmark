#include "bench/fib.hpp"

// RE Benchmark TU 4333 of 20000 (depth=28, stamp="default")
namespace bench_tu_4333 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4333>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4333

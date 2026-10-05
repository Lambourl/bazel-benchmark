#include "bench/fib.hpp"

// RE Benchmark TU 18451 of 20000 (depth=28, stamp="default")
namespace bench_tu_18451 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18451>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18451

#include "bench/fib.hpp"

// RE Benchmark TU 4451 of 20000 (depth=28, stamp="default")
namespace bench_tu_4451 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4451>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4451

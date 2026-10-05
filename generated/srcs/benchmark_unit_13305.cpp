#include "bench/fib.hpp"

// RE Benchmark TU 13305 of 20000 (depth=28, stamp="default")
namespace bench_tu_13305 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13305>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13305

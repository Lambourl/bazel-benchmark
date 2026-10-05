#include "bench/fib.hpp"

// RE Benchmark TU 19531 of 20000 (depth=28, stamp="default")
namespace bench_tu_19531 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19531>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19531

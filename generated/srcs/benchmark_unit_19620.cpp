#include "bench/fib.hpp"

// RE Benchmark TU 19620 of 20000 (depth=28, stamp="default")
namespace bench_tu_19620 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19620>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19620

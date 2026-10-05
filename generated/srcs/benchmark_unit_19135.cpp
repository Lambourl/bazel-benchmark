#include "bench/fib.hpp"

// RE Benchmark TU 19135 of 20000 (depth=28, stamp="default")
namespace bench_tu_19135 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19135>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19135

#include "bench/fib.hpp"

// RE Benchmark TU 7959 of 20000 (depth=28, stamp="default")
namespace bench_tu_7959 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7959>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7959

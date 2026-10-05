#include "bench/fib.hpp"

// RE Benchmark TU 7985 of 20000 (depth=28, stamp="default")
namespace bench_tu_7985 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7985>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7985

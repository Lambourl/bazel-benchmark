#include "bench/fib.hpp"

// RE Benchmark TU 7909 of 20000 (depth=28, stamp="default")
namespace bench_tu_7909 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7909>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7909

#include "bench/fib.hpp"

// RE Benchmark TU 17909 of 20000 (depth=28, stamp="default")
namespace bench_tu_17909 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17909>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17909

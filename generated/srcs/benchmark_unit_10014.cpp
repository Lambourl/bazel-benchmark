#include "bench/fib.hpp"

// RE Benchmark TU 10014 of 20000 (depth=28, stamp="default")
namespace bench_tu_10014 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10014>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10014

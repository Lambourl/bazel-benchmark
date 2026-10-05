#include "bench/fib.hpp"

// RE Benchmark TU 10068 of 20000 (depth=28, stamp="default")
namespace bench_tu_10068 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10068>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10068

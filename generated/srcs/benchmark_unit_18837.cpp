#include "bench/fib.hpp"

// RE Benchmark TU 18837 of 20000 (depth=28, stamp="default")
namespace bench_tu_18837 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18837>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18837

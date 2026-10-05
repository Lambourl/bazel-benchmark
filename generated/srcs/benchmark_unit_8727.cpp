#include "bench/fib.hpp"

// RE Benchmark TU 8727 of 20000 (depth=28, stamp="default")
namespace bench_tu_8727 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8727>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8727

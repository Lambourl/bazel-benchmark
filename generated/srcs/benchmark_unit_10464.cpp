#include "bench/fib.hpp"

// RE Benchmark TU 10464 of 20000 (depth=28, stamp="default")
namespace bench_tu_10464 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10464>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10464

#include "bench/fib.hpp"

// RE Benchmark TU 18474 of 20000 (depth=28, stamp="default")
namespace bench_tu_18474 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18474>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18474

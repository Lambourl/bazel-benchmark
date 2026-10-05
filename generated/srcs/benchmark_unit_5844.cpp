#include "bench/fib.hpp"

// RE Benchmark TU 5844 of 20000 (depth=28, stamp="default")
namespace bench_tu_5844 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5844>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5844

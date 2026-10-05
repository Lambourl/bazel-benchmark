#include "bench/fib.hpp"

// RE Benchmark TU 18826 of 20000 (depth=28, stamp="default")
namespace bench_tu_18826 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18826>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18826

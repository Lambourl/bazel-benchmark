#include "bench/fib.hpp"

// RE Benchmark TU 17895 of 20000 (depth=28, stamp="default")
namespace bench_tu_17895 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17895>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17895

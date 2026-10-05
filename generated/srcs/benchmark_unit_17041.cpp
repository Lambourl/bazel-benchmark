#include "bench/fib.hpp"

// RE Benchmark TU 17041 of 20000 (depth=28, stamp="default")
namespace bench_tu_17041 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17041>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17041

#include "bench/fib.hpp"

// RE Benchmark TU 855 of 20000 (depth=28, stamp="default")
namespace bench_tu_855 {
constexpr unsigned long long result = ::bench::slow_fib<28, 855>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_855

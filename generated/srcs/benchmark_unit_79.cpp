#include "bench/fib.hpp"

// RE Benchmark TU 79 of 20000 (depth=28, stamp="default")
namespace bench_tu_79 {
constexpr unsigned long long result = ::bench::slow_fib<28, 79>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_79

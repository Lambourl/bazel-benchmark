#include "bench/fib.hpp"

// RE Benchmark TU 1723 of 20000 (depth=28, stamp="default")
namespace bench_tu_1723 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1723>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1723

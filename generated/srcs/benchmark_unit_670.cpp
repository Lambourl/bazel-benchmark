#include "bench/fib.hpp"

// RE Benchmark TU 670 of 20000 (depth=28, stamp="default")
namespace bench_tu_670 {
constexpr unsigned long long result = ::bench::slow_fib<28, 670>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_670

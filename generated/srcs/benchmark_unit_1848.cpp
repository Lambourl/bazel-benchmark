#include "bench/fib.hpp"

// RE Benchmark TU 1848 of 20000 (depth=28, stamp="default")
namespace bench_tu_1848 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1848>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1848

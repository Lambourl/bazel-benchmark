#include "bench/fib.hpp"

// RE Benchmark TU 5952 of 20000 (depth=28, stamp="default")
namespace bench_tu_5952 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5952>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5952

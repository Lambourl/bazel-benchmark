#include "bench/fib.hpp"

// RE Benchmark TU 7688 of 20000 (depth=28, stamp="default")
namespace bench_tu_7688 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7688>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7688

#include "bench/fib.hpp"

// RE Benchmark TU 3995 of 20000 (depth=28, stamp="default")
namespace bench_tu_3995 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3995>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3995

#include "bench/fib.hpp"

// RE Benchmark TU 540 of 20000 (depth=28, stamp="default")
namespace bench_tu_540 {
constexpr unsigned long long result = ::bench::slow_fib<28, 540>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_540

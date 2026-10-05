#include "bench/fib.hpp"

// RE Benchmark TU 14282 of 20000 (depth=28, stamp="default")
namespace bench_tu_14282 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14282>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14282

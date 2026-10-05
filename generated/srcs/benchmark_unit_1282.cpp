#include "bench/fib.hpp"

// RE Benchmark TU 1282 of 20000 (depth=28, stamp="default")
namespace bench_tu_1282 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1282>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1282

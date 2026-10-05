#include "bench/fib.hpp"

// RE Benchmark TU 1382 of 20000 (depth=28, stamp="default")
namespace bench_tu_1382 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1382>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1382

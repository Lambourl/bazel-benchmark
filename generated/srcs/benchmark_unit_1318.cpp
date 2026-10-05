#include "bench/fib.hpp"

// RE Benchmark TU 1318 of 20000 (depth=28, stamp="default")
namespace bench_tu_1318 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1318>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1318

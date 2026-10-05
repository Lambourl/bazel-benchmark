#include "bench/fib.hpp"

// RE Benchmark TU 10235 of 20000 (depth=28, stamp="default")
namespace bench_tu_10235 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10235>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10235

#include "bench/fib.hpp"

// RE Benchmark TU 10270 of 20000 (depth=28, stamp="default")
namespace bench_tu_10270 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10270>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10270

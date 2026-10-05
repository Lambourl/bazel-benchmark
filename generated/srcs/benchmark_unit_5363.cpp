#include "bench/fib.hpp"

// RE Benchmark TU 5363 of 20000 (depth=28, stamp="default")
namespace bench_tu_5363 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5363>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5363

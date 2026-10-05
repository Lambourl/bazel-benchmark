#include "bench/fib.hpp"

// RE Benchmark TU 560 of 20000 (depth=28, stamp="default")
namespace bench_tu_560 {
constexpr unsigned long long result = ::bench::slow_fib<28, 560>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_560

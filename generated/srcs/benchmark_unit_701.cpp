#include "bench/fib.hpp"

// RE Benchmark TU 701 of 20000 (depth=28, stamp="default")
namespace bench_tu_701 {
constexpr unsigned long long result = ::bench::slow_fib<28, 701>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_701

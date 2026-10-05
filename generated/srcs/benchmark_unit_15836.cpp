#include "bench/fib.hpp"

// RE Benchmark TU 15836 of 20000 (depth=28, stamp="default")
namespace bench_tu_15836 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15836>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15836

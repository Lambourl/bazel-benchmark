#include "bench/fib.hpp"

// RE Benchmark TU 83 of 20000 (depth=28, stamp="default")
namespace bench_tu_83 {
constexpr unsigned long long result = ::bench::slow_fib<28, 83>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_83

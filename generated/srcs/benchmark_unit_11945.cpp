#include "bench/fib.hpp"

// RE Benchmark TU 11945 of 20000 (depth=28, stamp="default")
namespace bench_tu_11945 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11945>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11945

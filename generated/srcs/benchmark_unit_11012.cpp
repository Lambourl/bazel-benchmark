#include "bench/fib.hpp"

// RE Benchmark TU 11012 of 20000 (depth=28, stamp="default")
namespace bench_tu_11012 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11012>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11012

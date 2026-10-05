#include "bench/fib.hpp"

// RE Benchmark TU 15810 of 20000 (depth=28, stamp="default")
namespace bench_tu_15810 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15810>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15810

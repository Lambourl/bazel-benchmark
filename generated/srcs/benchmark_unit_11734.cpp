#include "bench/fib.hpp"

// RE Benchmark TU 11734 of 20000 (depth=28, stamp="default")
namespace bench_tu_11734 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11734>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11734

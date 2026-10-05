#include "bench/fib.hpp"

// RE Benchmark TU 10610 of 20000 (depth=28, stamp="default")
namespace bench_tu_10610 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10610>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10610

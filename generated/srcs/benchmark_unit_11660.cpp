#include "bench/fib.hpp"

// RE Benchmark TU 11660 of 20000 (depth=28, stamp="default")
namespace bench_tu_11660 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11660>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11660

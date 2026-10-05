#include "bench/fib.hpp"

// RE Benchmark TU 8157 of 20000 (depth=28, stamp="default")
namespace bench_tu_8157 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8157>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8157

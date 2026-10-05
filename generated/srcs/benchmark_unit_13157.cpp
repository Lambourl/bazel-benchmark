#include "bench/fib.hpp"

// RE Benchmark TU 13157 of 20000 (depth=28, stamp="default")
namespace bench_tu_13157 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13157>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13157

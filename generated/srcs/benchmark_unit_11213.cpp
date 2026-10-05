#include "bench/fib.hpp"

// RE Benchmark TU 11213 of 20000 (depth=28, stamp="default")
namespace bench_tu_11213 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11213>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11213

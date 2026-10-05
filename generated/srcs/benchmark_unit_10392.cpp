#include "bench/fib.hpp"

// RE Benchmark TU 10392 of 20000 (depth=28, stamp="default")
namespace bench_tu_10392 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10392>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10392

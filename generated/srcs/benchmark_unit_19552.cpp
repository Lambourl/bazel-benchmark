#include "bench/fib.hpp"

// RE Benchmark TU 19552 of 20000 (depth=28, stamp="default")
namespace bench_tu_19552 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19552>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19552

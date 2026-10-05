#include "bench/fib.hpp"

// RE Benchmark TU 13402 of 20000 (depth=28, stamp="default")
namespace bench_tu_13402 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13402>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13402

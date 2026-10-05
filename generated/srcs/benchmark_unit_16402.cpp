#include "bench/fib.hpp"

// RE Benchmark TU 16402 of 20000 (depth=28, stamp="default")
namespace bench_tu_16402 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16402>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16402

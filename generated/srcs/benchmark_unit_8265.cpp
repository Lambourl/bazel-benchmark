#include "bench/fib.hpp"

// RE Benchmark TU 8265 of 20000 (depth=28, stamp="default")
namespace bench_tu_8265 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8265>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8265

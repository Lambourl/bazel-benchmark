#include "bench/fib.hpp"

// RE Benchmark TU 18265 of 20000 (depth=28, stamp="default")
namespace bench_tu_18265 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18265>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18265

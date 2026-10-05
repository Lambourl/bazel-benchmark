#include "bench/fib.hpp"

// RE Benchmark TU 7215 of 20000 (depth=28, stamp="default")
namespace bench_tu_7215 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7215>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7215

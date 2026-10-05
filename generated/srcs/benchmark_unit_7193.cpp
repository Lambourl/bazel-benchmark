#include "bench/fib.hpp"

// RE Benchmark TU 7193 of 20000 (depth=28, stamp="default")
namespace bench_tu_7193 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7193>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7193

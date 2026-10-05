#include "bench/fib.hpp"

// RE Benchmark TU 14166 of 20000 (depth=28, stamp="default")
namespace bench_tu_14166 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14166>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14166

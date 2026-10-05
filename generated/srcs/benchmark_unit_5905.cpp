#include "bench/fib.hpp"

// RE Benchmark TU 5905 of 20000 (depth=28, stamp="default")
namespace bench_tu_5905 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5905>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5905

#include "bench/fib.hpp"

// RE Benchmark TU 8905 of 20000 (depth=28, stamp="default")
namespace bench_tu_8905 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8905>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8905

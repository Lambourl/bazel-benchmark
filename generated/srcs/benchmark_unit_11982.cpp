#include "bench/fib.hpp"

// RE Benchmark TU 11982 of 20000 (depth=28, stamp="default")
namespace bench_tu_11982 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11982>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11982

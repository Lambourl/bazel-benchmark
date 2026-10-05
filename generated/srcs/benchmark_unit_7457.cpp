#include "bench/fib.hpp"

// RE Benchmark TU 7457 of 20000 (depth=28, stamp="default")
namespace bench_tu_7457 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7457>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7457

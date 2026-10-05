#include "bench/fib.hpp"

// RE Benchmark TU 600 of 20000 (depth=28, stamp="default")
namespace bench_tu_600 {
constexpr unsigned long long result = ::bench::slow_fib<28, 600>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_600

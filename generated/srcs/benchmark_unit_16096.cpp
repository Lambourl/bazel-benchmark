#include "bench/fib.hpp"

// RE Benchmark TU 16096 of 20000 (depth=28, stamp="default")
namespace bench_tu_16096 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16096>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16096

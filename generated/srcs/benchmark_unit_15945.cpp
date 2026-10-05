#include "bench/fib.hpp"

// RE Benchmark TU 15945 of 20000 (depth=28, stamp="default")
namespace bench_tu_15945 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15945>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15945

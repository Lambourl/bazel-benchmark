#include "bench/fib.hpp"

// RE Benchmark TU 7168 of 20000 (depth=28, stamp="default")
namespace bench_tu_7168 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7168>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7168

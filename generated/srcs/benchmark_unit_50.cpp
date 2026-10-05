#include "bench/fib.hpp"

// RE Benchmark TU 50 of 20000 (depth=28, stamp="default")
namespace bench_tu_50 {
constexpr unsigned long long result = ::bench::slow_fib<28, 50>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_50

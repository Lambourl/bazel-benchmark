#include "bench/fib.hpp"

// RE Benchmark TU 10262 of 20000 (depth=28, stamp="default")
namespace bench_tu_10262 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10262>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10262

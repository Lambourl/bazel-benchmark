#include "bench/fib.hpp"

// RE Benchmark TU 19262 of 20000 (depth=28, stamp="default")
namespace bench_tu_19262 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19262>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19262

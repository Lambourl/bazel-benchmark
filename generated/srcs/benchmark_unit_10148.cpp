#include "bench/fib.hpp"

// RE Benchmark TU 10148 of 20000 (depth=28, stamp="default")
namespace bench_tu_10148 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10148>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10148

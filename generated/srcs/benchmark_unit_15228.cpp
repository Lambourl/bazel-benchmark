#include "bench/fib.hpp"

// RE Benchmark TU 15228 of 20000 (depth=28, stamp="default")
namespace bench_tu_15228 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15228>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15228

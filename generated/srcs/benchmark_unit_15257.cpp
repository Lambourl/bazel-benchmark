#include "bench/fib.hpp"

// RE Benchmark TU 15257 of 20000 (depth=28, stamp="default")
namespace bench_tu_15257 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15257>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15257

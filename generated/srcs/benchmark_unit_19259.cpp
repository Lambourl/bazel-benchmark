#include "bench/fib.hpp"

// RE Benchmark TU 19259 of 20000 (depth=28, stamp="default")
namespace bench_tu_19259 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19259>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19259

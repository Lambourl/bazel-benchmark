#include "bench/fib.hpp"

// RE Benchmark TU 19507 of 20000 (depth=28, stamp="default")
namespace bench_tu_19507 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19507>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19507

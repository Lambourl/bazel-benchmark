#include "bench/fib.hpp"

// RE Benchmark TU 4428 of 20000 (depth=28, stamp="default")
namespace bench_tu_4428 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4428>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4428

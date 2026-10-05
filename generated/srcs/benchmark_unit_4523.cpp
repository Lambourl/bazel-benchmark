#include "bench/fib.hpp"

// RE Benchmark TU 4523 of 20000 (depth=28, stamp="default")
namespace bench_tu_4523 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4523>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4523

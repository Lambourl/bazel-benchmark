#include "bench/fib.hpp"

// RE Benchmark TU 3507 of 20000 (depth=28, stamp="default")
namespace bench_tu_3507 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3507>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3507

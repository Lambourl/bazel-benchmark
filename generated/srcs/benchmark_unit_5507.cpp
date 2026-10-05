#include "bench/fib.hpp"

// RE Benchmark TU 5507 of 20000 (depth=28, stamp="default")
namespace bench_tu_5507 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5507>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5507

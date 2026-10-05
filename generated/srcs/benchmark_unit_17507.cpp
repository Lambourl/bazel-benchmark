#include "bench/fib.hpp"

// RE Benchmark TU 17507 of 20000 (depth=28, stamp="default")
namespace bench_tu_17507 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17507>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17507

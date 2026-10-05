#include "bench/fib.hpp"

// RE Benchmark TU 14458 of 20000 (depth=28, stamp="default")
namespace bench_tu_14458 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14458>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14458

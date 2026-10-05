#include "bench/fib.hpp"

// RE Benchmark TU 10798 of 20000 (depth=28, stamp="default")
namespace bench_tu_10798 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10798>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10798

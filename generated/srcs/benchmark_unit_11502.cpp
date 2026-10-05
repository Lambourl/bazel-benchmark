#include "bench/fib.hpp"

// RE Benchmark TU 11502 of 20000 (depth=28, stamp="default")
namespace bench_tu_11502 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11502>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11502

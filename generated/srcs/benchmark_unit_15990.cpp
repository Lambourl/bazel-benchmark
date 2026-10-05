#include "bench/fib.hpp"

// RE Benchmark TU 15990 of 20000 (depth=28, stamp="default")
namespace bench_tu_15990 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15990>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15990

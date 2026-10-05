#include "bench/fib.hpp"

// RE Benchmark TU 990 of 20000 (depth=28, stamp="default")
namespace bench_tu_990 {
constexpr unsigned long long result = ::bench::slow_fib<28, 990>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_990

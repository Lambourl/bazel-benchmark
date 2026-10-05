#include "bench/fib.hpp"

// RE Benchmark TU 610 of 20000 (depth=28, stamp="default")
namespace bench_tu_610 {
constexpr unsigned long long result = ::bench::slow_fib<28, 610>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_610

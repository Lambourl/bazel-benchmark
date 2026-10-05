#include "bench/fib.hpp"

// RE Benchmark TU 2102 of 20000 (depth=28, stamp="default")
namespace bench_tu_2102 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2102>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2102

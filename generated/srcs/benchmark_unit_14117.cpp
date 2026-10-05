#include "bench/fib.hpp"

// RE Benchmark TU 14117 of 20000 (depth=28, stamp="default")
namespace bench_tu_14117 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14117>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14117

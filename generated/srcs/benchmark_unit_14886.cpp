#include "bench/fib.hpp"

// RE Benchmark TU 14886 of 20000 (depth=28, stamp="default")
namespace bench_tu_14886 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14886>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14886

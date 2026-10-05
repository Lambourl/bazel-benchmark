#include "bench/fib.hpp"

// RE Benchmark TU 886 of 20000 (depth=28, stamp="default")
namespace bench_tu_886 {
constexpr unsigned long long result = ::bench::slow_fib<28, 886>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_886

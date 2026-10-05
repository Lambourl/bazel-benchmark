#include "bench/fib.hpp"

// RE Benchmark TU 5825 of 20000 (depth=28, stamp="default")
namespace bench_tu_5825 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5825>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5825

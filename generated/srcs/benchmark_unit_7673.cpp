#include "bench/fib.hpp"

// RE Benchmark TU 7673 of 20000 (depth=28, stamp="default")
namespace bench_tu_7673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7673

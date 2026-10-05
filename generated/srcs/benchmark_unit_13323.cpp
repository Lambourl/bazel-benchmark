#include "bench/fib.hpp"

// RE Benchmark TU 13323 of 20000 (depth=28, stamp="default")
namespace bench_tu_13323 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13323>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13323

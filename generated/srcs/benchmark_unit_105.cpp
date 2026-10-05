#include "bench/fib.hpp"

// RE Benchmark TU 105 of 20000 (depth=28, stamp="default")
namespace bench_tu_105 {
constexpr unsigned long long result = ::bench::slow_fib<28, 105>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_105

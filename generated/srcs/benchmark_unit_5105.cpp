#include "bench/fib.hpp"

// RE Benchmark TU 5105 of 20000 (depth=28, stamp="default")
namespace bench_tu_5105 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5105>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5105

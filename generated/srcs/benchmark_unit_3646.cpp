#include "bench/fib.hpp"

// RE Benchmark TU 3646 of 20000 (depth=28, stamp="default")
namespace bench_tu_3646 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3646>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3646

#include "bench/fib.hpp"

// RE Benchmark TU 3543 of 20000 (depth=28, stamp="default")
namespace bench_tu_3543 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3543>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3543

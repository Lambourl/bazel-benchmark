#include "bench/fib.hpp"

// RE Benchmark TU 19471 of 20000 (depth=28, stamp="default")
namespace bench_tu_19471 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19471>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19471

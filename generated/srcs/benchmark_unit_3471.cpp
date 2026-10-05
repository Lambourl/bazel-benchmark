#include "bench/fib.hpp"

// RE Benchmark TU 3471 of 20000 (depth=28, stamp="default")
namespace bench_tu_3471 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3471>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3471

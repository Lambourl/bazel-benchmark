#include "bench/fib.hpp"

// RE Benchmark TU 6471 of 20000 (depth=28, stamp="default")
namespace bench_tu_6471 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6471>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6471

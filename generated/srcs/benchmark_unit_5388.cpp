#include "bench/fib.hpp"

// RE Benchmark TU 5388 of 20000 (depth=28, stamp="default")
namespace bench_tu_5388 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5388>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5388

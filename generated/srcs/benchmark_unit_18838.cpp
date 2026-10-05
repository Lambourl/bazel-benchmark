#include "bench/fib.hpp"

// RE Benchmark TU 18838 of 20000 (depth=28, stamp="default")
namespace bench_tu_18838 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18838>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18838

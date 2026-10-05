#include "bench/fib.hpp"

// RE Benchmark TU 10707 of 20000 (depth=28, stamp="default")
namespace bench_tu_10707 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10707>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10707

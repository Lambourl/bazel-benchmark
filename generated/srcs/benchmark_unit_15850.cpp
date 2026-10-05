#include "bench/fib.hpp"

// RE Benchmark TU 15850 of 20000 (depth=28, stamp="default")
namespace bench_tu_15850 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15850>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15850

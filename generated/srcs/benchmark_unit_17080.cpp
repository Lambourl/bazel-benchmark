#include "bench/fib.hpp"

// RE Benchmark TU 17080 of 20000 (depth=28, stamp="default")
namespace bench_tu_17080 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17080>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17080

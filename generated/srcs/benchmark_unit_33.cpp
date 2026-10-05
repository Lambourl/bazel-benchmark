#include "bench/fib.hpp"

// RE Benchmark TU 33 of 20000 (depth=28, stamp="default")
namespace bench_tu_33 {
constexpr unsigned long long result = ::bench::slow_fib<28, 33>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_33

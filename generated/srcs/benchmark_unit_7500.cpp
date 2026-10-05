#include "bench/fib.hpp"

// RE Benchmark TU 7500 of 20000 (depth=28, stamp="default")
namespace bench_tu_7500 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7500>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7500

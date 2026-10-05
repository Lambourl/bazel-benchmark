#include "bench/fib.hpp"

// RE Benchmark TU 15120 of 20000 (depth=28, stamp="default")
namespace bench_tu_15120 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15120>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15120

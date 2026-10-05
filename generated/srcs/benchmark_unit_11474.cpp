#include "bench/fib.hpp"

// RE Benchmark TU 11474 of 20000 (depth=28, stamp="default")
namespace bench_tu_11474 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11474>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11474

#include "bench/fib.hpp"

// RE Benchmark TU 4554 of 20000 (depth=28, stamp="default")
namespace bench_tu_4554 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4554>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4554

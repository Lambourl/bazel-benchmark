#include "bench/fib.hpp"

// RE Benchmark TU 5559 of 20000 (depth=28, stamp="default")
namespace bench_tu_5559 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5559>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5559

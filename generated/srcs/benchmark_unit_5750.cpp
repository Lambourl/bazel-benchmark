#include "bench/fib.hpp"

// RE Benchmark TU 5750 of 20000 (depth=28, stamp="default")
namespace bench_tu_5750 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5750>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5750

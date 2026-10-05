#include "bench/fib.hpp"

// RE Benchmark TU 4638 of 20000 (depth=28, stamp="default")
namespace bench_tu_4638 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4638>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4638

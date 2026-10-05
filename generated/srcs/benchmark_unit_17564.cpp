#include "bench/fib.hpp"

// RE Benchmark TU 17564 of 20000 (depth=28, stamp="default")
namespace bench_tu_17564 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17564>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17564

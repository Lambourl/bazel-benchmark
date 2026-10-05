#include "bench/fib.hpp"

// RE Benchmark TU 1760 of 20000 (depth=28, stamp="default")
namespace bench_tu_1760 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1760>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1760

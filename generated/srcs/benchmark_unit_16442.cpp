#include "bench/fib.hpp"

// RE Benchmark TU 16442 of 20000 (depth=28, stamp="default")
namespace bench_tu_16442 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16442>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16442

#include "bench/fib.hpp"

// RE Benchmark TU 7454 of 20000 (depth=28, stamp="default")
namespace bench_tu_7454 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7454>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7454

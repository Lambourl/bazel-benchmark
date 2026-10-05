#include "bench/fib.hpp"

// RE Benchmark TU 10454 of 20000 (depth=28, stamp="default")
namespace bench_tu_10454 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10454>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10454

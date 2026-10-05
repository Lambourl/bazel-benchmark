#include "bench/fib.hpp"

// RE Benchmark TU 19454 of 20000 (depth=28, stamp="default")
namespace bench_tu_19454 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19454>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19454

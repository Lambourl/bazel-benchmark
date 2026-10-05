#include "bench/fib.hpp"

// RE Benchmark TU 454 of 20000 (depth=28, stamp="default")
namespace bench_tu_454 {
constexpr unsigned long long result = ::bench::slow_fib<28, 454>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_454

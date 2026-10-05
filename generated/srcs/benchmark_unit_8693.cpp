#include "bench/fib.hpp"

// RE Benchmark TU 8693 of 20000 (depth=28, stamp="default")
namespace bench_tu_8693 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8693>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8693

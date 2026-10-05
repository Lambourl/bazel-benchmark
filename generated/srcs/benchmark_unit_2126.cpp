#include "bench/fib.hpp"

// RE Benchmark TU 2126 of 20000 (depth=28, stamp="default")
namespace bench_tu_2126 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2126>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2126

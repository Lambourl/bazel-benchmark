#include "bench/fib.hpp"

// RE Benchmark TU 2693 of 20000 (depth=28, stamp="default")
namespace bench_tu_2693 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2693>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2693

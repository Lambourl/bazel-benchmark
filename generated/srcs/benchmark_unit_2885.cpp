#include "bench/fib.hpp"

// RE Benchmark TU 2885 of 20000 (depth=28, stamp="default")
namespace bench_tu_2885 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2885>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2885

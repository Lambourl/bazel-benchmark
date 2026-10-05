#include "bench/fib.hpp"

// RE Benchmark TU 16908 of 20000 (depth=28, stamp="default")
namespace bench_tu_16908 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16908>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16908

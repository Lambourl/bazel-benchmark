#include "bench/fib.hpp"

// RE Benchmark TU 16715 of 20000 (depth=28, stamp="default")
namespace bench_tu_16715 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16715>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16715

#include "bench/fib.hpp"

// RE Benchmark TU 7908 of 20000 (depth=28, stamp="default")
namespace bench_tu_7908 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7908>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7908

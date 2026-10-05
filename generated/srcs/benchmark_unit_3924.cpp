#include "bench/fib.hpp"

// RE Benchmark TU 3924 of 20000 (depth=28, stamp="default")
namespace bench_tu_3924 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3924>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3924

#include "bench/fib.hpp"

// RE Benchmark TU 13530 of 20000 (depth=28, stamp="default")
namespace bench_tu_13530 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13530>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13530

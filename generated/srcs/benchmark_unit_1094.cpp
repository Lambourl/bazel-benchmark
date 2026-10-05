#include "bench/fib.hpp"

// RE Benchmark TU 1094 of 20000 (depth=28, stamp="default")
namespace bench_tu_1094 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1094>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1094

#include "bench/fib.hpp"

// RE Benchmark TU 9146 of 20000 (depth=28, stamp="default")
namespace bench_tu_9146 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9146>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9146

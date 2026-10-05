#include "bench/fib.hpp"

// RE Benchmark TU 9382 of 20000 (depth=28, stamp="default")
namespace bench_tu_9382 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9382>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9382

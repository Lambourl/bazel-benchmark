#include "bench/fib.hpp"

// RE Benchmark TU 17356 of 20000 (depth=28, stamp="default")
namespace bench_tu_17356 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17356>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17356

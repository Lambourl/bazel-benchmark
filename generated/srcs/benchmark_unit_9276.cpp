#include "bench/fib.hpp"

// RE Benchmark TU 9276 of 20000 (depth=28, stamp="default")
namespace bench_tu_9276 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9276>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9276

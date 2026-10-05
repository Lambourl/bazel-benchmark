#include "bench/fib.hpp"

// RE Benchmark TU 9559 of 20000 (depth=28, stamp="default")
namespace bench_tu_9559 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9559>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9559

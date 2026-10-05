#include "bench/fib.hpp"

// RE Benchmark TU 9358 of 20000 (depth=28, stamp="default")
namespace bench_tu_9358 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9358>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9358

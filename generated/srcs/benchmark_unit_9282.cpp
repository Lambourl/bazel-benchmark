#include "bench/fib.hpp"

// RE Benchmark TU 9282 of 20000 (depth=28, stamp="default")
namespace bench_tu_9282 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9282>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9282

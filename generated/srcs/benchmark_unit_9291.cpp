#include "bench/fib.hpp"

// RE Benchmark TU 9291 of 20000 (depth=28, stamp="default")
namespace bench_tu_9291 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9291>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9291

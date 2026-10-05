#include "bench/fib.hpp"

// RE Benchmark TU 9217 of 20000 (depth=28, stamp="default")
namespace bench_tu_9217 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9217>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9217

#include "bench/fib.hpp"

// RE Benchmark TU 9999 of 20000 (depth=28, stamp="default")
namespace bench_tu_9999 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9999>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9999

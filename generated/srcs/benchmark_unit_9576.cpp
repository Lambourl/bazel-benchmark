#include "bench/fib.hpp"

// RE Benchmark TU 9576 of 20000 (depth=28, stamp="default")
namespace bench_tu_9576 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9576>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9576

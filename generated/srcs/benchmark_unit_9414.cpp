#include "bench/fib.hpp"

// RE Benchmark TU 9414 of 20000 (depth=28, stamp="default")
namespace bench_tu_9414 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9414>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9414

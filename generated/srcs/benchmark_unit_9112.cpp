#include "bench/fib.hpp"

// RE Benchmark TU 9112 of 20000 (depth=28, stamp="default")
namespace bench_tu_9112 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9112>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9112

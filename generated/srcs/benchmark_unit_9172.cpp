#include "bench/fib.hpp"

// RE Benchmark TU 9172 of 20000 (depth=28, stamp="default")
namespace bench_tu_9172 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9172>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9172

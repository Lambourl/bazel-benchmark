#include "bench/fib.hpp"

// RE Benchmark TU 9417 of 20000 (depth=28, stamp="default")
namespace bench_tu_9417 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9417>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9417

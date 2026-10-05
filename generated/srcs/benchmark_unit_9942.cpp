#include "bench/fib.hpp"

// RE Benchmark TU 9942 of 20000 (depth=28, stamp="default")
namespace bench_tu_9942 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9942>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9942

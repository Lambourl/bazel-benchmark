#include "bench/fib.hpp"

// RE Benchmark TU 9897 of 20000 (depth=28, stamp="default")
namespace bench_tu_9897 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9897>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9897

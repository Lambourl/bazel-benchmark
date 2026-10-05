#include "bench/fib.hpp"

// RE Benchmark TU 18942 of 20000 (depth=28, stamp="default")
namespace bench_tu_18942 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18942>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18942

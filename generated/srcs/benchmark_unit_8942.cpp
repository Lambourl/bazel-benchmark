#include "bench/fib.hpp"

// RE Benchmark TU 8942 of 20000 (depth=28, stamp="default")
namespace bench_tu_8942 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8942>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8942

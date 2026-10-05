#include "bench/fib.hpp"

// RE Benchmark TU 14942 of 20000 (depth=28, stamp="default")
namespace bench_tu_14942 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14942>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14942

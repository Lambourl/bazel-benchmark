#include "bench/fib.hpp"

// RE Benchmark TU 16963 of 20000 (depth=28, stamp="default")
namespace bench_tu_16963 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16963>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16963

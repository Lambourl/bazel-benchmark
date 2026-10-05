#include "bench/fib.hpp"

// RE Benchmark TU 17600 of 20000 (depth=28, stamp="default")
namespace bench_tu_17600 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17600>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17600

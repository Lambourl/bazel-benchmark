#include "bench/fib.hpp"

// RE Benchmark TU 10048 of 20000 (depth=28, stamp="default")
namespace bench_tu_10048 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10048>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10048

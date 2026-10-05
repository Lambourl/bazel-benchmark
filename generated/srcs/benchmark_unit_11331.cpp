#include "bench/fib.hpp"

// RE Benchmark TU 11331 of 20000 (depth=28, stamp="default")
namespace bench_tu_11331 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11331>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11331

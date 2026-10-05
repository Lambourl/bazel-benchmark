#include "bench/fib.hpp"

// RE Benchmark TU 17091 of 20000 (depth=28, stamp="default")
namespace bench_tu_17091 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17091>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17091

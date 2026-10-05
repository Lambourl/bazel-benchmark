#include "bench/fib.hpp"

// RE Benchmark TU 7442 of 20000 (depth=28, stamp="default")
namespace bench_tu_7442 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7442>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7442

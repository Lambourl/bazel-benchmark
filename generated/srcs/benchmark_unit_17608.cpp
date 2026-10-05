#include "bench/fib.hpp"

// RE Benchmark TU 17608 of 20000 (depth=28, stamp="default")
namespace bench_tu_17608 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17608>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17608

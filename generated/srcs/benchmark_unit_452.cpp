#include "bench/fib.hpp"

// RE Benchmark TU 452 of 20000 (depth=28, stamp="default")
namespace bench_tu_452 {
constexpr unsigned long long result = ::bench::slow_fib<28, 452>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_452

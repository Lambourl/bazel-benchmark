#include "bench/fib.hpp"

// RE Benchmark TU 15605 of 20000 (depth=28, stamp="default")
namespace bench_tu_15605 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15605>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15605

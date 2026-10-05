#include "bench/fib.hpp"

// RE Benchmark TU 5475 of 20000 (depth=28, stamp="default")
namespace bench_tu_5475 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5475>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5475

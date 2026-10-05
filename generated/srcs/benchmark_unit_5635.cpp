#include "bench/fib.hpp"

// RE Benchmark TU 5635 of 20000 (depth=28, stamp="default")
namespace bench_tu_5635 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5635>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5635

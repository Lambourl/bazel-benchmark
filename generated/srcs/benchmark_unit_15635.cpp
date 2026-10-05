#include "bench/fib.hpp"

// RE Benchmark TU 15635 of 20000 (depth=28, stamp="default")
namespace bench_tu_15635 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15635>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15635

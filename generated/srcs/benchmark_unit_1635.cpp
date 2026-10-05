#include "bench/fib.hpp"

// RE Benchmark TU 1635 of 20000 (depth=28, stamp="default")
namespace bench_tu_1635 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1635>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1635

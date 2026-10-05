#include "bench/fib.hpp"

// RE Benchmark TU 18915 of 20000 (depth=28, stamp="default")
namespace bench_tu_18915 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18915>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18915

#include "bench/fib.hpp"

// RE Benchmark TU 3802 of 20000 (depth=28, stamp="default")
namespace bench_tu_3802 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3802>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3802

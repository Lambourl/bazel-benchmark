#include "bench/fib.hpp"

// RE Benchmark TU 99 of 20000 (depth=28, stamp="default")
namespace bench_tu_99 {
constexpr unsigned long long result = ::bench::slow_fib<28, 99>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_99

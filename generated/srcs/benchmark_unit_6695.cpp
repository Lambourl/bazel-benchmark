#include "bench/fib.hpp"

// RE Benchmark TU 6695 of 20000 (depth=28, stamp="default")
namespace bench_tu_6695 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6695>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6695

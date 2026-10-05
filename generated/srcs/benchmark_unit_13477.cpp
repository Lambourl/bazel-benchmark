#include "bench/fib.hpp"

// RE Benchmark TU 13477 of 20000 (depth=28, stamp="default")
namespace bench_tu_13477 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13477>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13477

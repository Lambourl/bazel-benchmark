#include "bench/fib.hpp"

// RE Benchmark TU 3748 of 20000 (depth=28, stamp="default")
namespace bench_tu_3748 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3748>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3748

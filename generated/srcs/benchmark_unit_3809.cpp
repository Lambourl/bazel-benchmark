#include "bench/fib.hpp"

// RE Benchmark TU 3809 of 20000 (depth=28, stamp="default")
namespace bench_tu_3809 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3809>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3809

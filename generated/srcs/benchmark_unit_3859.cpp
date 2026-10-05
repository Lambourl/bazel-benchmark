#include "bench/fib.hpp"

// RE Benchmark TU 3859 of 20000 (depth=28, stamp="default")
namespace bench_tu_3859 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3859>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3859

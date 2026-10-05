#include "bench/fib.hpp"

// RE Benchmark TU 7065 of 20000 (depth=28, stamp="default")
namespace bench_tu_7065 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7065>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7065

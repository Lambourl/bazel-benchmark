#include "bench/fib.hpp"

// RE Benchmark TU 4065 of 20000 (depth=28, stamp="default")
namespace bench_tu_4065 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4065>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4065

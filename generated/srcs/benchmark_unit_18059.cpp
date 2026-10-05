#include "bench/fib.hpp"

// RE Benchmark TU 18059 of 20000 (depth=28, stamp="default")
namespace bench_tu_18059 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18059>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18059

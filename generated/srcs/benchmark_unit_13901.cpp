#include "bench/fib.hpp"

// RE Benchmark TU 13901 of 20000 (depth=28, stamp="default")
namespace bench_tu_13901 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13901>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13901

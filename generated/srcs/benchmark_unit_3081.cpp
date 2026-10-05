#include "bench/fib.hpp"

// RE Benchmark TU 3081 of 20000 (depth=28, stamp="default")
namespace bench_tu_3081 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3081>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3081

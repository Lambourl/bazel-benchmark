#include "bench/fib.hpp"

// RE Benchmark TU 3882 of 20000 (depth=28, stamp="default")
namespace bench_tu_3882 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3882>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3882

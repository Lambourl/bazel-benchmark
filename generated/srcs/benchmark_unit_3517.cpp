#include "bench/fib.hpp"

// RE Benchmark TU 3517 of 20000 (depth=28, stamp="default")
namespace bench_tu_3517 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3517>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3517

#include "bench/fib.hpp"

// RE Benchmark TU 4318 of 20000 (depth=28, stamp="default")
namespace bench_tu_4318 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4318>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4318

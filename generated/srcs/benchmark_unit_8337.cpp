#include "bench/fib.hpp"

// RE Benchmark TU 8337 of 20000 (depth=28, stamp="default")
namespace bench_tu_8337 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8337>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8337

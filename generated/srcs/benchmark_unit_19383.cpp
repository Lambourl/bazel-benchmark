#include "bench/fib.hpp"

// RE Benchmark TU 19383 of 20000 (depth=28, stamp="default")
namespace bench_tu_19383 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19383>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19383

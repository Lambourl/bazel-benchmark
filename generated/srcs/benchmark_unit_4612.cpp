#include "bench/fib.hpp"

// RE Benchmark TU 4612 of 20000 (depth=28, stamp="default")
namespace bench_tu_4612 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4612>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4612

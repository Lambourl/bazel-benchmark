#include "bench/fib.hpp"

// RE Benchmark TU 384 of 20000 (depth=28, stamp="default")
namespace bench_tu_384 {
constexpr unsigned long long result = ::bench::slow_fib<28, 384>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_384

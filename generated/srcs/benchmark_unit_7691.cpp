#include "bench/fib.hpp"

// RE Benchmark TU 7691 of 20000 (depth=28, stamp="default")
namespace bench_tu_7691 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7691>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7691

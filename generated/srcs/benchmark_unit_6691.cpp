#include "bench/fib.hpp"

// RE Benchmark TU 6691 of 20000 (depth=28, stamp="default")
namespace bench_tu_6691 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6691>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6691

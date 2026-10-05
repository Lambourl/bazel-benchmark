#include "bench/fib.hpp"

// RE Benchmark TU 1755 of 20000 (depth=28, stamp="default")
namespace bench_tu_1755 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1755>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1755

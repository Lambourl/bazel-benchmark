#include "bench/fib.hpp"

// RE Benchmark TU 1743 of 20000 (depth=28, stamp="default")
namespace bench_tu_1743 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1743>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1743

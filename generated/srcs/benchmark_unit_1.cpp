#include "bench/fib.hpp"

// RE Benchmark TU 1 of 20000 (depth=28, stamp="default")
namespace bench_tu_1 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1

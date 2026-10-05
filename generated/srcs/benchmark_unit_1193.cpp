#include "bench/fib.hpp"

// RE Benchmark TU 1193 of 20000 (depth=28, stamp="default")
namespace bench_tu_1193 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1193>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1193

#include "bench/fib.hpp"

// RE Benchmark TU 8168 of 20000 (depth=28, stamp="default")
namespace bench_tu_8168 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8168>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8168

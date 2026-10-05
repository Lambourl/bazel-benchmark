#include "bench/fib.hpp"

// RE Benchmark TU 13154 of 20000 (depth=28, stamp="default")
namespace bench_tu_13154 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13154>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13154

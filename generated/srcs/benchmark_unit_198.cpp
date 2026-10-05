#include "bench/fib.hpp"

// RE Benchmark TU 198 of 20000 (depth=28, stamp="default")
namespace bench_tu_198 {
constexpr unsigned long long result = ::bench::slow_fib<28, 198>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_198

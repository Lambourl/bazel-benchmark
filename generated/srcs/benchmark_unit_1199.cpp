#include "bench/fib.hpp"

// RE Benchmark TU 1199 of 20000 (depth=28, stamp="default")
namespace bench_tu_1199 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1199>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1199

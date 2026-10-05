#include "bench/fib.hpp"

// RE Benchmark TU 13243 of 20000 (depth=28, stamp="default")
namespace bench_tu_13243 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13243>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13243

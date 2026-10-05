#include "bench/fib.hpp"

// RE Benchmark TU 19233 of 20000 (depth=28, stamp="default")
namespace bench_tu_19233 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19233>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19233

#include "bench/fib.hpp"

// RE Benchmark TU 251 of 20000 (depth=28, stamp="default")
namespace bench_tu_251 {
constexpr unsigned long long result = ::bench::slow_fib<28, 251>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_251

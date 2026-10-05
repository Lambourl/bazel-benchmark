#include "bench/fib.hpp"

// RE Benchmark TU 275 of 20000 (depth=28, stamp="default")
namespace bench_tu_275 {
constexpr unsigned long long result = ::bench::slow_fib<28, 275>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_275

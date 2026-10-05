#include "bench/fib.hpp"

// RE Benchmark TU 7237 of 20000 (depth=28, stamp="default")
namespace bench_tu_7237 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7237>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7237

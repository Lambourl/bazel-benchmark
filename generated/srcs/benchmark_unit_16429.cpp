#include "bench/fib.hpp"

// RE Benchmark TU 16429 of 20000 (depth=28, stamp="default")
namespace bench_tu_16429 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16429>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16429

#include "bench/fib.hpp"

// RE Benchmark TU 7338 of 20000 (depth=28, stamp="default")
namespace bench_tu_7338 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7338>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7338

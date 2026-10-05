#include "bench/fib.hpp"

// RE Benchmark TU 8428 of 20000 (depth=28, stamp="default")
namespace bench_tu_8428 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8428>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8428

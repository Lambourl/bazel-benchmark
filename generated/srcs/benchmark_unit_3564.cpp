#include "bench/fib.hpp"

// RE Benchmark TU 3564 of 20000 (depth=28, stamp="default")
namespace bench_tu_3564 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3564>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3564

#include "bench/fib.hpp"

// RE Benchmark TU 15026 of 20000 (depth=28, stamp="default")
namespace bench_tu_15026 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15026>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15026

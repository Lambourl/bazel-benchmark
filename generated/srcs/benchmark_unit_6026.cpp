#include "bench/fib.hpp"

// RE Benchmark TU 6026 of 20000 (depth=28, stamp="default")
namespace bench_tu_6026 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6026>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6026

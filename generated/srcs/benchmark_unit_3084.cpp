#include "bench/fib.hpp"

// RE Benchmark TU 3084 of 20000 (depth=28, stamp="default")
namespace bench_tu_3084 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3084>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3084

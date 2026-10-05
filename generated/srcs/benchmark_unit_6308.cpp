#include "bench/fib.hpp"

// RE Benchmark TU 6308 of 20000 (depth=28, stamp="default")
namespace bench_tu_6308 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6308>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6308

#include "bench/fib.hpp"

// RE Benchmark TU 5268 of 20000 (depth=28, stamp="default")
namespace bench_tu_5268 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5268>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5268

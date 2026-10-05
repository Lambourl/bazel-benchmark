#include "bench/fib.hpp"

// RE Benchmark TU 5244 of 20000 (depth=28, stamp="default")
namespace bench_tu_5244 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5244>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5244

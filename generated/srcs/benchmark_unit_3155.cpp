#include "bench/fib.hpp"

// RE Benchmark TU 3155 of 20000 (depth=28, stamp="default")
namespace bench_tu_3155 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3155>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3155

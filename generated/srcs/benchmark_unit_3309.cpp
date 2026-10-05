#include "bench/fib.hpp"

// RE Benchmark TU 3309 of 20000 (depth=28, stamp="default")
namespace bench_tu_3309 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3309>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3309

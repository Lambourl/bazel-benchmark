#include "bench/fib.hpp"

// RE Benchmark TU 3079 of 20000 (depth=28, stamp="default")
namespace bench_tu_3079 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3079>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3079

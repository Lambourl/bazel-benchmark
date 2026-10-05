#include "bench/fib.hpp"

// RE Benchmark TU 3902 of 20000 (depth=28, stamp="default")
namespace bench_tu_3902 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3902>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3902

#include "bench/fib.hpp"

// RE Benchmark TU 3656 of 20000 (depth=28, stamp="default")
namespace bench_tu_3656 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3656>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3656

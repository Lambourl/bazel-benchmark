#include "bench/fib.hpp"

// RE Benchmark TU 11498 of 20000 (depth=28, stamp="default")
namespace bench_tu_11498 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11498>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11498

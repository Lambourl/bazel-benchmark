#include "bench/fib.hpp"

// RE Benchmark TU 3303 of 20000 (depth=28, stamp="default")
namespace bench_tu_3303 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3303>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3303

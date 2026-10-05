#include "bench/fib.hpp"

// RE Benchmark TU 6303 of 20000 (depth=28, stamp="default")
namespace bench_tu_6303 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6303>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6303

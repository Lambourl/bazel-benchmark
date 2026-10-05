#include "bench/fib.hpp"

// RE Benchmark TU 14351 of 20000 (depth=28, stamp="default")
namespace bench_tu_14351 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14351>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14351

#include "bench/fib.hpp"

// RE Benchmark TU 8974 of 20000 (depth=28, stamp="default")
namespace bench_tu_8974 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8974>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8974

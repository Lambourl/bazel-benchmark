#include "bench/fib.hpp"

// RE Benchmark TU 6224 of 20000 (depth=28, stamp="default")
namespace bench_tu_6224 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6224>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6224

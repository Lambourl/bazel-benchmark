#include "bench/fib.hpp"

// RE Benchmark TU 3037 of 20000 (depth=28, stamp="default")
namespace bench_tu_3037 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3037>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3037

#include "bench/fib.hpp"

// RE Benchmark TU 17336 of 20000 (depth=28, stamp="default")
namespace bench_tu_17336 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17336>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17336

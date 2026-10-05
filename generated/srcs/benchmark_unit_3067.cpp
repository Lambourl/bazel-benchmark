#include "bench/fib.hpp"

// RE Benchmark TU 3067 of 20000 (depth=28, stamp="default")
namespace bench_tu_3067 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3067>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3067

#include "bench/fib.hpp"

// RE Benchmark TU 14073 of 20000 (depth=28, stamp="default")
namespace bench_tu_14073 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14073>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14073

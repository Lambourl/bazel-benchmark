#include "bench/fib.hpp"

// RE Benchmark TU 3185 of 20000 (depth=28, stamp="default")
namespace bench_tu_3185 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3185>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3185

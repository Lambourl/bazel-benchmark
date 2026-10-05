#include "bench/fib.hpp"

// RE Benchmark TU 3221 of 20000 (depth=28, stamp="default")
namespace bench_tu_3221 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3221>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3221

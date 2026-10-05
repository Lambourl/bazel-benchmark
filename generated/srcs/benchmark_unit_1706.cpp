#include "bench/fib.hpp"

// RE Benchmark TU 1706 of 20000 (depth=28, stamp="default")
namespace bench_tu_1706 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1706>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1706

#include "bench/fib.hpp"

// RE Benchmark TU 17694 of 20000 (depth=28, stamp="default")
namespace bench_tu_17694 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17694>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17694

#include "bench/fib.hpp"

// RE Benchmark TU 17135 of 20000 (depth=28, stamp="default")
namespace bench_tu_17135 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17135>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17135

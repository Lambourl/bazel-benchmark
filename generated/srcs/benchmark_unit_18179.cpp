#include "bench/fib.hpp"

// RE Benchmark TU 18179 of 20000 (depth=28, stamp="default")
namespace bench_tu_18179 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18179>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18179

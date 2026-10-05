#include "bench/fib.hpp"

// RE Benchmark TU 8293 of 20000 (depth=28, stamp="default")
namespace bench_tu_8293 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8293>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8293

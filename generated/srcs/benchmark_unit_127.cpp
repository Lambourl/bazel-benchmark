#include "bench/fib.hpp"

// RE Benchmark TU 127 of 20000 (depth=28, stamp="default")
namespace bench_tu_127 {
constexpr unsigned long long result = ::bench::slow_fib<28, 127>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_127

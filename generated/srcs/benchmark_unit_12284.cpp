#include "bench/fib.hpp"

// RE Benchmark TU 12284 of 20000 (depth=28, stamp="default")
namespace bench_tu_12284 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12284>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12284

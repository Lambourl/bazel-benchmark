#include "bench/fib.hpp"

// RE Benchmark TU 18542 of 20000 (depth=28, stamp="default")
namespace bench_tu_18542 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18542>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18542

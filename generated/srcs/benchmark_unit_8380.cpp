#include "bench/fib.hpp"

// RE Benchmark TU 8380 of 20000 (depth=28, stamp="default")
namespace bench_tu_8380 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8380>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8380

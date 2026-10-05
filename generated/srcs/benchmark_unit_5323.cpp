#include "bench/fib.hpp"

// RE Benchmark TU 5323 of 20000 (depth=28, stamp="default")
namespace bench_tu_5323 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5323>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5323

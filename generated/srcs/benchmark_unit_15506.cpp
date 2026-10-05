#include "bench/fib.hpp"

// RE Benchmark TU 15506 of 20000 (depth=28, stamp="default")
namespace bench_tu_15506 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15506>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15506

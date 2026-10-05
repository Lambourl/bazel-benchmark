#include "bench/fib.hpp"

// RE Benchmark TU 6380 of 20000 (depth=28, stamp="default")
namespace bench_tu_6380 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6380>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6380

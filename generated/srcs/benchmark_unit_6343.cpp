#include "bench/fib.hpp"

// RE Benchmark TU 6343 of 20000 (depth=28, stamp="default")
namespace bench_tu_6343 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6343>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6343

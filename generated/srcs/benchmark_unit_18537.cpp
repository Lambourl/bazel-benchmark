#include "bench/fib.hpp"

// RE Benchmark TU 18537 of 20000 (depth=28, stamp="default")
namespace bench_tu_18537 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18537>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18537

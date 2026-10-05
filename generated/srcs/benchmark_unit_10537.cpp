#include "bench/fib.hpp"

// RE Benchmark TU 10537 of 20000 (depth=28, stamp="default")
namespace bench_tu_10537 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10537>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10537

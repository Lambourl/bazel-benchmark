#include "bench/fib.hpp"

// RE Benchmark TU 11537 of 20000 (depth=28, stamp="default")
namespace bench_tu_11537 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11537>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11537

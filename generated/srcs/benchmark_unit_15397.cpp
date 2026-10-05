#include "bench/fib.hpp"

// RE Benchmark TU 15397 of 20000 (depth=28, stamp="default")
namespace bench_tu_15397 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15397>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15397

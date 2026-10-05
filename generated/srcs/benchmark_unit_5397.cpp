#include "bench/fib.hpp"

// RE Benchmark TU 5397 of 20000 (depth=28, stamp="default")
namespace bench_tu_5397 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5397>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5397

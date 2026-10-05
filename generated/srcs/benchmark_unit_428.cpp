#include "bench/fib.hpp"

// RE Benchmark TU 428 of 20000 (depth=28, stamp="default")
namespace bench_tu_428 {
constexpr unsigned long long result = ::bench::slow_fib<28, 428>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_428

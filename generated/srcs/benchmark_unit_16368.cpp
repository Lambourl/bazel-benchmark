#include "bench/fib.hpp"

// RE Benchmark TU 16368 of 20000 (depth=28, stamp="default")
namespace bench_tu_16368 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16368>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16368

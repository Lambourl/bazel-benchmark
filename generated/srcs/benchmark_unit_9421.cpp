#include "bench/fib.hpp"

// RE Benchmark TU 9421 of 20000 (depth=28, stamp="default")
namespace bench_tu_9421 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9421>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9421

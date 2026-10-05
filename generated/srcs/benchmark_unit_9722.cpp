#include "bench/fib.hpp"

// RE Benchmark TU 9722 of 20000 (depth=28, stamp="default")
namespace bench_tu_9722 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9722>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9722

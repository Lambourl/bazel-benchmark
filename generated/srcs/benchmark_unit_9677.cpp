#include "bench/fib.hpp"

// RE Benchmark TU 9677 of 20000 (depth=28, stamp="default")
namespace bench_tu_9677 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9677>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9677

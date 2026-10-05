#include "bench/fib.hpp"

// RE Benchmark TU 9459 of 20000 (depth=28, stamp="default")
namespace bench_tu_9459 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9459>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9459

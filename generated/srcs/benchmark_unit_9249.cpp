#include "bench/fib.hpp"

// RE Benchmark TU 9249 of 20000 (depth=28, stamp="default")
namespace bench_tu_9249 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9249>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9249

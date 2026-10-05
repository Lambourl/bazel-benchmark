#include "bench/fib.hpp"

// RE Benchmark TU 9236 of 20000 (depth=28, stamp="default")
namespace bench_tu_9236 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9236>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9236

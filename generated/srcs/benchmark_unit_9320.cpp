#include "bench/fib.hpp"

// RE Benchmark TU 9320 of 20000 (depth=28, stamp="default")
namespace bench_tu_9320 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9320>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9320

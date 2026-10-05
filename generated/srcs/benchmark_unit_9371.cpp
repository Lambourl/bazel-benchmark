#include "bench/fib.hpp"

// RE Benchmark TU 9371 of 20000 (depth=28, stamp="default")
namespace bench_tu_9371 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9371>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9371

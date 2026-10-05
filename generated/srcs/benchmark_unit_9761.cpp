#include "bench/fib.hpp"

// RE Benchmark TU 9761 of 20000 (depth=28, stamp="default")
namespace bench_tu_9761 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9761>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9761

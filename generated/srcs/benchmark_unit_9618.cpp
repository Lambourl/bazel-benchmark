#include "bench/fib.hpp"

// RE Benchmark TU 9618 of 20000 (depth=28, stamp="default")
namespace bench_tu_9618 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9618>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9618

#include "bench/fib.hpp"

// RE Benchmark TU 9166 of 20000 (depth=28, stamp="default")
namespace bench_tu_9166 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9166>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9166

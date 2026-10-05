#include "bench/fib.hpp"

// RE Benchmark TU 9763 of 20000 (depth=28, stamp="default")
namespace bench_tu_9763 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9763>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9763

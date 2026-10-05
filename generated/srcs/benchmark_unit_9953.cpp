#include "bench/fib.hpp"

// RE Benchmark TU 9953 of 20000 (depth=28, stamp="default")
namespace bench_tu_9953 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9953>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9953

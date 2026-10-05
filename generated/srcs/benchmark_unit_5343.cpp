#include "bench/fib.hpp"

// RE Benchmark TU 5343 of 20000 (depth=28, stamp="default")
namespace bench_tu_5343 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5343>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5343

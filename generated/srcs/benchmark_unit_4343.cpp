#include "bench/fib.hpp"

// RE Benchmark TU 4343 of 20000 (depth=28, stamp="default")
namespace bench_tu_4343 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4343>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4343

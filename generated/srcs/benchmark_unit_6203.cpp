#include "bench/fib.hpp"

// RE Benchmark TU 6203 of 20000 (depth=28, stamp="default")
namespace bench_tu_6203 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6203>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6203

#include "bench/fib.hpp"

// RE Benchmark TU 13203 of 20000 (depth=28, stamp="default")
namespace bench_tu_13203 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13203>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13203

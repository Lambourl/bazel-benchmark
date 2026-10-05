#include "bench/fib.hpp"

// RE Benchmark TU 19203 of 20000 (depth=28, stamp="default")
namespace bench_tu_19203 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19203>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19203

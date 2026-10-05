#include "bench/fib.hpp"

// RE Benchmark TU 6396 of 20000 (depth=28, stamp="default")
namespace bench_tu_6396 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6396>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6396

#include "bench/fib.hpp"

// RE Benchmark TU 13468 of 20000 (depth=28, stamp="default")
namespace bench_tu_13468 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13468>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13468

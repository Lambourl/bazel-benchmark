#include "bench/fib.hpp"

// RE Benchmark TU 13053 of 20000 (depth=28, stamp="default")
namespace bench_tu_13053 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13053>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13053

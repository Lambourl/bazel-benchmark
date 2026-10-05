#include "bench/fib.hpp"

// RE Benchmark TU 6457 of 20000 (depth=28, stamp="default")
namespace bench_tu_6457 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6457>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6457

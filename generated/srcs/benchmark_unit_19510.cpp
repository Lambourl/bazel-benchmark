#include "bench/fib.hpp"

// RE Benchmark TU 19510 of 20000 (depth=28, stamp="default")
namespace bench_tu_19510 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19510>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19510

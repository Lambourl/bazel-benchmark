#include "bench/fib.hpp"

// RE Benchmark TU 4510 of 20000 (depth=28, stamp="default")
namespace bench_tu_4510 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4510>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4510

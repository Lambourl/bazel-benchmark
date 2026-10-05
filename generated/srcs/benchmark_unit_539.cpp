#include "bench/fib.hpp"

// RE Benchmark TU 539 of 20000 (depth=28, stamp="default")
namespace bench_tu_539 {
constexpr unsigned long long result = ::bench::slow_fib<28, 539>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_539

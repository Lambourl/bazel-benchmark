#include "bench/fib.hpp"

// RE Benchmark TU 13856 of 20000 (depth=28, stamp="default")
namespace bench_tu_13856 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13856>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13856

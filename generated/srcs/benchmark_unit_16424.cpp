#include "bench/fib.hpp"

// RE Benchmark TU 16424 of 20000 (depth=28, stamp="default")
namespace bench_tu_16424 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16424>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16424

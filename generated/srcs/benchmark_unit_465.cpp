#include "bench/fib.hpp"

// RE Benchmark TU 465 of 20000 (depth=28, stamp="default")
namespace bench_tu_465 {
constexpr unsigned long long result = ::bench::slow_fib<28, 465>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_465

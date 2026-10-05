#include "bench/fib.hpp"

// RE Benchmark TU 19465 of 20000 (depth=28, stamp="default")
namespace bench_tu_19465 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19465>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19465

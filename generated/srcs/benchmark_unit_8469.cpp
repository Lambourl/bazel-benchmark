#include "bench/fib.hpp"

// RE Benchmark TU 8469 of 20000 (depth=28, stamp="default")
namespace bench_tu_8469 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8469>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8469

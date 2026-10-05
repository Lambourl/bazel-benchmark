#include "bench/fib.hpp"

// RE Benchmark TU 11419 of 20000 (depth=28, stamp="default")
namespace bench_tu_11419 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11419>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11419

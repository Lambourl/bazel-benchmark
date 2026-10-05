#include "bench/fib.hpp"

// RE Benchmark TU 8873 of 20000 (depth=28, stamp="default")
namespace bench_tu_8873 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8873>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8873

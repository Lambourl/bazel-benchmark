#include "bench/fib.hpp"

// RE Benchmark TU 8996 of 20000 (depth=28, stamp="default")
namespace bench_tu_8996 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8996>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8996

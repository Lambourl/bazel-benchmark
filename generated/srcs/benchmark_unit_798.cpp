#include "bench/fib.hpp"

// RE Benchmark TU 798 of 20000 (depth=28, stamp="default")
namespace bench_tu_798 {
constexpr unsigned long long result = ::bench::slow_fib<28, 798>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_798

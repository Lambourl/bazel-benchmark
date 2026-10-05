#include "bench/fib.hpp"

// RE Benchmark TU 772 of 20000 (depth=28, stamp="default")
namespace bench_tu_772 {
constexpr unsigned long long result = ::bench::slow_fib<28, 772>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_772

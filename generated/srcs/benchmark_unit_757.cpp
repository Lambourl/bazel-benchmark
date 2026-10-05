#include "bench/fib.hpp"

// RE Benchmark TU 757 of 20000 (depth=28, stamp="default")
namespace bench_tu_757 {
constexpr unsigned long long result = ::bench::slow_fib<28, 757>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_757

#include "bench/fib.hpp"

// RE Benchmark TU 5670 of 20000 (depth=28, stamp="default")
namespace bench_tu_5670 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5670>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5670

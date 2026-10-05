#include "bench/fib.hpp"

// RE Benchmark TU 627 of 20000 (depth=28, stamp="default")
namespace bench_tu_627 {
constexpr unsigned long long result = ::bench::slow_fib<28, 627>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_627

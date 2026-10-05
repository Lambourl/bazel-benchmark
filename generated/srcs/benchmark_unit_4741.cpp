#include "bench/fib.hpp"

// RE Benchmark TU 4741 of 20000 (depth=28, stamp="default")
namespace bench_tu_4741 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4741>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4741

#include "bench/fib.hpp"

// RE Benchmark TU 15886 of 20000 (depth=28, stamp="default")
namespace bench_tu_15886 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15886>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15886

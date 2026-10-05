#include "bench/fib.hpp"

// RE Benchmark TU 17915 of 20000 (depth=28, stamp="default")
namespace bench_tu_17915 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17915>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17915

#include "bench/fib.hpp"

// RE Benchmark TU 16457 of 20000 (depth=28, stamp="default")
namespace bench_tu_16457 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16457>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16457

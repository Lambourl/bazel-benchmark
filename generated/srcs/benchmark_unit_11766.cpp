#include "bench/fib.hpp"

// RE Benchmark TU 11766 of 20000 (depth=28, stamp="default")
namespace bench_tu_11766 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11766>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11766

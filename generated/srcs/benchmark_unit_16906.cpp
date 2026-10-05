#include "bench/fib.hpp"

// RE Benchmark TU 16906 of 20000 (depth=28, stamp="default")
namespace bench_tu_16906 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16906>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16906

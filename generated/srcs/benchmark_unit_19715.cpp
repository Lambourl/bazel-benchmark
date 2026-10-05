#include "bench/fib.hpp"

// RE Benchmark TU 19715 of 20000 (depth=28, stamp="default")
namespace bench_tu_19715 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19715>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19715

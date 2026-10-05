#include "bench/fib.hpp"

// RE Benchmark TU 18788 of 20000 (depth=28, stamp="default")
namespace bench_tu_18788 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18788>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18788

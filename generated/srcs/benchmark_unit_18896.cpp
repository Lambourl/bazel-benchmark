#include "bench/fib.hpp"

// RE Benchmark TU 18896 of 20000 (depth=28, stamp="default")
namespace bench_tu_18896 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18896>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18896

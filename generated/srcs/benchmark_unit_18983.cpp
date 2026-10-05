#include "bench/fib.hpp"

// RE Benchmark TU 18983 of 20000 (depth=28, stamp="default")
namespace bench_tu_18983 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18983>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18983

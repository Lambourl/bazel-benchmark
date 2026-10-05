#include "bench/fib.hpp"

// RE Benchmark TU 15956 of 20000 (depth=28, stamp="default")
namespace bench_tu_15956 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15956>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15956

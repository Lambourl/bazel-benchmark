#include "bench/fib.hpp"

// RE Benchmark TU 17893 of 20000 (depth=28, stamp="default")
namespace bench_tu_17893 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17893>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17893

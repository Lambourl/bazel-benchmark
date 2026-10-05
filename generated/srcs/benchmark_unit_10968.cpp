#include "bench/fib.hpp"

// RE Benchmark TU 10968 of 20000 (depth=28, stamp="default")
namespace bench_tu_10968 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10968>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10968

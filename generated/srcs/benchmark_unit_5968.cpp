#include "bench/fib.hpp"

// RE Benchmark TU 5968 of 20000 (depth=28, stamp="default")
namespace bench_tu_5968 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5968>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5968

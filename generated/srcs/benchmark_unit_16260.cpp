#include "bench/fib.hpp"

// RE Benchmark TU 16260 of 20000 (depth=28, stamp="default")
namespace bench_tu_16260 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16260>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16260

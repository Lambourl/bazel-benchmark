#include "bench/fib.hpp"

// RE Benchmark TU 1260 of 20000 (depth=28, stamp="default")
namespace bench_tu_1260 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1260>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1260

#include "bench/fib.hpp"

// RE Benchmark TU 10260 of 20000 (depth=28, stamp="default")
namespace bench_tu_10260 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10260>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10260

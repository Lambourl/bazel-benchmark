#include "bench/fib.hpp"

// RE Benchmark TU 3990 of 20000 (depth=28, stamp="default")
namespace bench_tu_3990 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3990>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3990

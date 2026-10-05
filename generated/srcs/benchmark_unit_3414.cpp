#include "bench/fib.hpp"

// RE Benchmark TU 3414 of 20000 (depth=28, stamp="default")
namespace bench_tu_3414 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3414>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3414

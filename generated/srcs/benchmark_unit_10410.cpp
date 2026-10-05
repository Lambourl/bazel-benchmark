#include "bench/fib.hpp"

// RE Benchmark TU 10410 of 20000 (depth=28, stamp="default")
namespace bench_tu_10410 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10410>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10410

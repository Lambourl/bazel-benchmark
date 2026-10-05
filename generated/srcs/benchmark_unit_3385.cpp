#include "bench/fib.hpp"

// RE Benchmark TU 3385 of 20000 (depth=28, stamp="default")
namespace bench_tu_3385 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3385>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3385

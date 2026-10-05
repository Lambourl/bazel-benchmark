#include "bench/fib.hpp"

// RE Benchmark TU 7255 of 20000 (depth=28, stamp="default")
namespace bench_tu_7255 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7255>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7255

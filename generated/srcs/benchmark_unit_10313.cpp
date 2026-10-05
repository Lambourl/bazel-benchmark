#include "bench/fib.hpp"

// RE Benchmark TU 10313 of 20000 (depth=28, stamp="default")
namespace bench_tu_10313 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10313>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10313

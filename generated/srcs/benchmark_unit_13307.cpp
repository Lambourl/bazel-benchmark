#include "bench/fib.hpp"

// RE Benchmark TU 13307 of 20000 (depth=28, stamp="default")
namespace bench_tu_13307 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13307>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13307

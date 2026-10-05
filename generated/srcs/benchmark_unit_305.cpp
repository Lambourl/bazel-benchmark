#include "bench/fib.hpp"

// RE Benchmark TU 305 of 20000 (depth=28, stamp="default")
namespace bench_tu_305 {
constexpr unsigned long long result = ::bench::slow_fib<28, 305>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_305

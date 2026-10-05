#include "bench/fib.hpp"

// RE Benchmark TU 15348 of 20000 (depth=28, stamp="default")
namespace bench_tu_15348 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15348>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15348

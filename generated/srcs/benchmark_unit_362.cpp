#include "bench/fib.hpp"

// RE Benchmark TU 362 of 20000 (depth=28, stamp="default")
namespace bench_tu_362 {
constexpr unsigned long long result = ::bench::slow_fib<28, 362>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_362

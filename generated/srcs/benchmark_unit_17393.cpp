#include "bench/fib.hpp"

// RE Benchmark TU 17393 of 20000 (depth=28, stamp="default")
namespace bench_tu_17393 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17393>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17393

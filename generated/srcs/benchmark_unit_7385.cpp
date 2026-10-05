#include "bench/fib.hpp"

// RE Benchmark TU 7385 of 20000 (depth=28, stamp="default")
namespace bench_tu_7385 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7385>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7385

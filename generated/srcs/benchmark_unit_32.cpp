#include "bench/fib.hpp"

// RE Benchmark TU 32 of 20000 (depth=28, stamp="default")
namespace bench_tu_32 {
constexpr unsigned long long result = ::bench::slow_fib<28, 32>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_32

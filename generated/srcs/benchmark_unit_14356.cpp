#include "bench/fib.hpp"

// RE Benchmark TU 14356 of 20000 (depth=28, stamp="default")
namespace bench_tu_14356 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14356>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14356

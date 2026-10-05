#include "bench/fib.hpp"

// RE Benchmark TU 15532 of 20000 (depth=28, stamp="default")
namespace bench_tu_15532 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15532>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15532

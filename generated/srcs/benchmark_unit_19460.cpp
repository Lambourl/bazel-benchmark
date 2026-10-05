#include "bench/fib.hpp"

// RE Benchmark TU 19460 of 20000 (depth=28, stamp="default")
namespace bench_tu_19460 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19460>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19460

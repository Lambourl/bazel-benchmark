#include "bench/fib.hpp"

// RE Benchmark TU 5467 of 20000 (depth=28, stamp="default")
namespace bench_tu_5467 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5467>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5467

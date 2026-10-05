#include "bench/fib.hpp"

// RE Benchmark TU 10786 of 20000 (depth=28, stamp="default")
namespace bench_tu_10786 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10786>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10786

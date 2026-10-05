#include "bench/fib.hpp"

// RE Benchmark TU 6739 of 20000 (depth=28, stamp="default")
namespace bench_tu_6739 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6739>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6739

#include "bench/fib.hpp"

// RE Benchmark TU 6357 of 20000 (depth=28, stamp="default")
namespace bench_tu_6357 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6357>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6357

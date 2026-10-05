#include "bench/fib.hpp"

// RE Benchmark TU 14763 of 20000 (depth=28, stamp="default")
namespace bench_tu_14763 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14763>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14763

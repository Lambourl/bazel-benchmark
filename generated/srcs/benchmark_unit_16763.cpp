#include "bench/fib.hpp"

// RE Benchmark TU 16763 of 20000 (depth=28, stamp="default")
namespace bench_tu_16763 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16763>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16763

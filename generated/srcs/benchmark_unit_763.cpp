#include "bench/fib.hpp"

// RE Benchmark TU 763 of 20000 (depth=28, stamp="default")
namespace bench_tu_763 {
constexpr unsigned long long result = ::bench::slow_fib<28, 763>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_763

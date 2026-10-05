#include "bench/fib.hpp"

// RE Benchmark TU 5518 of 20000 (depth=28, stamp="default")
namespace bench_tu_5518 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5518>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5518

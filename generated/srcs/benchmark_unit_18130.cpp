#include "bench/fib.hpp"

// RE Benchmark TU 18130 of 20000 (depth=28, stamp="default")
namespace bench_tu_18130 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18130>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18130

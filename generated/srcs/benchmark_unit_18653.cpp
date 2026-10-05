#include "bench/fib.hpp"

// RE Benchmark TU 18653 of 20000 (depth=28, stamp="default")
namespace bench_tu_18653 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18653>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18653

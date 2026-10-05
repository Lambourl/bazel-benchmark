#include "bench/fib.hpp"

// RE Benchmark TU 13661 of 20000 (depth=28, stamp="default")
namespace bench_tu_13661 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13661>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13661

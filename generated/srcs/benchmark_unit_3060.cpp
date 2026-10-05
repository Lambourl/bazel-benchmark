#include "bench/fib.hpp"

// RE Benchmark TU 3060 of 20000 (depth=28, stamp="default")
namespace bench_tu_3060 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3060>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3060

#include "bench/fib.hpp"

// RE Benchmark TU 2022 of 20000 (depth=28, stamp="default")
namespace bench_tu_2022 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2022>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2022

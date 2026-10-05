#include "bench/fib.hpp"

// RE Benchmark TU 17785 of 20000 (depth=28, stamp="default")
namespace bench_tu_17785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17785

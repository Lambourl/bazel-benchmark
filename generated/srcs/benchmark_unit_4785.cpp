#include "bench/fib.hpp"

// RE Benchmark TU 4785 of 20000 (depth=28, stamp="default")
namespace bench_tu_4785 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4785>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4785

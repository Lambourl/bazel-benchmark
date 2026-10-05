#include "bench/fib.hpp"

// RE Benchmark TU 18912 of 20000 (depth=28, stamp="default")
namespace bench_tu_18912 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18912>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18912

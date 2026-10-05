#include "bench/fib.hpp"

// RE Benchmark TU 3912 of 20000 (depth=28, stamp="default")
namespace bench_tu_3912 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3912>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3912

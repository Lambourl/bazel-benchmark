#include "bench/fib.hpp"

// RE Benchmark TU 8912 of 20000 (depth=28, stamp="default")
namespace bench_tu_8912 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8912>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8912

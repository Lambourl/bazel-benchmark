#include "bench/fib.hpp"

// RE Benchmark TU 8500 of 20000 (depth=28, stamp="default")
namespace bench_tu_8500 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8500>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8500

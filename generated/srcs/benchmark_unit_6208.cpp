#include "bench/fib.hpp"

// RE Benchmark TU 6208 of 20000 (depth=28, stamp="default")
namespace bench_tu_6208 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6208>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6208

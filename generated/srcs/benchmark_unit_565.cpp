#include "bench/fib.hpp"

// RE Benchmark TU 565 of 20000 (depth=28, stamp="default")
namespace bench_tu_565 {
constexpr unsigned long long result = ::bench::slow_fib<28, 565>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_565

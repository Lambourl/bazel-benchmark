#include "bench/fib.hpp"

// RE Benchmark TU 16145 of 20000 (depth=28, stamp="default")
namespace bench_tu_16145 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16145>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16145

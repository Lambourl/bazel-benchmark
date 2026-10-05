#include "bench/fib.hpp"

// RE Benchmark TU 17064 of 20000 (depth=28, stamp="default")
namespace bench_tu_17064 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17064>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17064

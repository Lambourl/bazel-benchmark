#include "bench/fib.hpp"

// RE Benchmark TU 15064 of 20000 (depth=28, stamp="default")
namespace bench_tu_15064 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15064>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15064

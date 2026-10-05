#include "bench/fib.hpp"

// RE Benchmark TU 8064 of 20000 (depth=28, stamp="default")
namespace bench_tu_8064 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8064>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8064

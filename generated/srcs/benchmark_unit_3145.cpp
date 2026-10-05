#include "bench/fib.hpp"

// RE Benchmark TU 3145 of 20000 (depth=28, stamp="default")
namespace bench_tu_3145 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3145>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3145

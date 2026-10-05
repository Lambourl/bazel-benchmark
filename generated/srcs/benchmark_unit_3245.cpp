#include "bench/fib.hpp"

// RE Benchmark TU 3245 of 20000 (depth=28, stamp="default")
namespace bench_tu_3245 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3245>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3245

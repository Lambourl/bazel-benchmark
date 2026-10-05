#include "bench/fib.hpp"

// RE Benchmark TU 10705 of 20000 (depth=28, stamp="default")
namespace bench_tu_10705 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10705>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10705

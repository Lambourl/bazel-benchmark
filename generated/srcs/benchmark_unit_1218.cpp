#include "bench/fib.hpp"

// RE Benchmark TU 1218 of 20000 (depth=28, stamp="default")
namespace bench_tu_1218 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1218>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1218

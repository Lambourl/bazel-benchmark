#include "bench/fib.hpp"

// RE Benchmark TU 4672 of 20000 (depth=28, stamp="default")
namespace bench_tu_4672 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4672>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4672

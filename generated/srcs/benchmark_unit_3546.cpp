#include "bench/fib.hpp"

// RE Benchmark TU 3546 of 20000 (depth=28, stamp="default")
namespace bench_tu_3546 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3546>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3546

#include "bench/fib.hpp"

// RE Benchmark TU 3824 of 20000 (depth=28, stamp="default")
namespace bench_tu_3824 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3824>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3824

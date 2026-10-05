#include "bench/fib.hpp"

// RE Benchmark TU 10824 of 20000 (depth=28, stamp="default")
namespace bench_tu_10824 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10824>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10824

#include "bench/fib.hpp"

// RE Benchmark TU 7310 of 20000 (depth=28, stamp="default")
namespace bench_tu_7310 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7310>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7310

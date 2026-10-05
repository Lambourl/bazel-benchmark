#include "bench/fib.hpp"

// RE Benchmark TU 810 of 20000 (depth=28, stamp="default")
namespace bench_tu_810 {
constexpr unsigned long long result = ::bench::slow_fib<28, 810>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_810

#include "bench/fib.hpp"

// RE Benchmark TU 6998 of 20000 (depth=28, stamp="default")
namespace bench_tu_6998 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6998>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6998

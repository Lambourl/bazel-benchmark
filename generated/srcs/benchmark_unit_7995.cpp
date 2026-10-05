#include "bench/fib.hpp"

// RE Benchmark TU 7995 of 20000 (depth=28, stamp="default")
namespace bench_tu_7995 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7995>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7995

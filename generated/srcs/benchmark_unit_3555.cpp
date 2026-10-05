#include "bench/fib.hpp"

// RE Benchmark TU 3555 of 20000 (depth=28, stamp="default")
namespace bench_tu_3555 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3555>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3555

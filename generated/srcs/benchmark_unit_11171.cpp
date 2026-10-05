#include "bench/fib.hpp"

// RE Benchmark TU 11171 of 20000 (depth=28, stamp="default")
namespace bench_tu_11171 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11171>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11171

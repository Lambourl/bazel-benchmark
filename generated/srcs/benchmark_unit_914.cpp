#include "bench/fib.hpp"

// RE Benchmark TU 914 of 20000 (depth=28, stamp="default")
namespace bench_tu_914 {
constexpr unsigned long long result = ::bench::slow_fib<28, 914>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_914

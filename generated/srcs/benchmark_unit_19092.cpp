#include "bench/fib.hpp"

// RE Benchmark TU 19092 of 20000 (depth=28, stamp="default")
namespace bench_tu_19092 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19092>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19092

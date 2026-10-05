#include "bench/fib.hpp"

// RE Benchmark TU 10309 of 20000 (depth=28, stamp="default")
namespace bench_tu_10309 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10309>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10309

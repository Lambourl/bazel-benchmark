#include "bench/fib.hpp"

// RE Benchmark TU 2309 of 20000 (depth=28, stamp="default")
namespace bench_tu_2309 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2309>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2309

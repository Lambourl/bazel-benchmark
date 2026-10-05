#include "bench/fib.hpp"

// RE Benchmark TU 16209 of 20000 (depth=28, stamp="default")
namespace bench_tu_16209 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16209>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16209

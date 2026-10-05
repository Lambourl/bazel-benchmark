#include "bench/fib.hpp"

// RE Benchmark TU 16899 of 20000 (depth=28, stamp="default")
namespace bench_tu_16899 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16899>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16899

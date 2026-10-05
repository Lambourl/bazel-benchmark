#include "bench/fib.hpp"

// RE Benchmark TU 13899 of 20000 (depth=28, stamp="default")
namespace bench_tu_13899 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13899>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13899

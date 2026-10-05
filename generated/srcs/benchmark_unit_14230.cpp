#include "bench/fib.hpp"

// RE Benchmark TU 14230 of 20000 (depth=28, stamp="default")
namespace bench_tu_14230 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14230>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14230

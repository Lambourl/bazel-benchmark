#include "bench/fib.hpp"

// RE Benchmark TU 19230 of 20000 (depth=28, stamp="default")
namespace bench_tu_19230 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19230>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19230

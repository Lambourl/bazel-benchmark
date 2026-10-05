#include "bench/fib.hpp"

// RE Benchmark TU 6292 of 20000 (depth=28, stamp="default")
namespace bench_tu_6292 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6292>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6292

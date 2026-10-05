#include "bench/fib.hpp"

// RE Benchmark TU 676 of 20000 (depth=28, stamp="default")
namespace bench_tu_676 {
constexpr unsigned long long result = ::bench::slow_fib<28, 676>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_676

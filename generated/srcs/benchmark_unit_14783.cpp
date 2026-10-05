#include "bench/fib.hpp"

// RE Benchmark TU 14783 of 20000 (depth=28, stamp="default")
namespace bench_tu_14783 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14783>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14783

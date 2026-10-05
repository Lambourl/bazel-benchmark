#include "bench/fib.hpp"

// RE Benchmark TU 60 of 20000 (depth=28, stamp="default")
namespace bench_tu_60 {
constexpr unsigned long long result = ::bench::slow_fib<28, 60>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_60

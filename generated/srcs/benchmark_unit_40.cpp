#include "bench/fib.hpp"

// RE Benchmark TU 40 of 20000 (depth=28, stamp="default")
namespace bench_tu_40 {
constexpr unsigned long long result = ::bench::slow_fib<28, 40>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_40

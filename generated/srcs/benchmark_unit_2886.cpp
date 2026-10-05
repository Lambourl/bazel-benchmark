#include "bench/fib.hpp"

// RE Benchmark TU 2886 of 20000 (depth=28, stamp="default")
namespace bench_tu_2886 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2886>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2886

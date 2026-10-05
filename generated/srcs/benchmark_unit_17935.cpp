#include "bench/fib.hpp"

// RE Benchmark TU 17935 of 20000 (depth=28, stamp="default")
namespace bench_tu_17935 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17935>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17935

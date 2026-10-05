#include "bench/fib.hpp"

// RE Benchmark TU 17202 of 20000 (depth=28, stamp="default")
namespace bench_tu_17202 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17202>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17202

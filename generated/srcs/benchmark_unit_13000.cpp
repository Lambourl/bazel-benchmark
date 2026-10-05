#include "bench/fib.hpp"

// RE Benchmark TU 13000 of 20000 (depth=28, stamp="default")
namespace bench_tu_13000 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13000>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13000

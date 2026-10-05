#include "bench/fib.hpp"

// RE Benchmark TU 10189 of 20000 (depth=28, stamp="default")
namespace bench_tu_10189 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10189>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10189

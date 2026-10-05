#include "bench/fib.hpp"

// RE Benchmark TU 12244 of 20000 (depth=28, stamp="default")
namespace bench_tu_12244 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12244>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12244

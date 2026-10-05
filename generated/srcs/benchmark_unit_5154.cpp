#include "bench/fib.hpp"

// RE Benchmark TU 5154 of 20000 (depth=28, stamp="default")
namespace bench_tu_5154 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5154>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5154

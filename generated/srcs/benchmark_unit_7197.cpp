#include "bench/fib.hpp"

// RE Benchmark TU 7197 of 20000 (depth=28, stamp="default")
namespace bench_tu_7197 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7197>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7197

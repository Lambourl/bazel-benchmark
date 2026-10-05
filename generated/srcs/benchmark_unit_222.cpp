#include "bench/fib.hpp"

// RE Benchmark TU 222 of 20000 (depth=28, stamp="default")
namespace bench_tu_222 {
constexpr unsigned long long result = ::bench::slow_fib<28, 222>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_222

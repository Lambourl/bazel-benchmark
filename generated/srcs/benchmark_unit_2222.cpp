#include "bench/fib.hpp"

// RE Benchmark TU 2222 of 20000 (depth=28, stamp="default")
namespace bench_tu_2222 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2222>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2222

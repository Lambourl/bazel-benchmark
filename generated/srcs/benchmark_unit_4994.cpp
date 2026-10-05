#include "bench/fib.hpp"

// RE Benchmark TU 4994 of 20000 (depth=28, stamp="default")
namespace bench_tu_4994 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4994>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4994

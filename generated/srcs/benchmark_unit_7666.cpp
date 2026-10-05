#include "bench/fib.hpp"

// RE Benchmark TU 7666 of 20000 (depth=28, stamp="default")
namespace bench_tu_7666 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7666>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7666

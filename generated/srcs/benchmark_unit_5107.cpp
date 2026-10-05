#include "bench/fib.hpp"

// RE Benchmark TU 5107 of 20000 (depth=28, stamp="default")
namespace bench_tu_5107 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5107>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5107

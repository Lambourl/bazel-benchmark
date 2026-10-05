#include "bench/fib.hpp"

// RE Benchmark TU 5112 of 20000 (depth=28, stamp="default")
namespace bench_tu_5112 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5112>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5112

#include "bench/fib.hpp"

// RE Benchmark TU 1259 of 20000 (depth=28, stamp="default")
namespace bench_tu_1259 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1259>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1259

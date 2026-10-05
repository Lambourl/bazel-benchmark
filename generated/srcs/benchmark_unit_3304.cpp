#include "bench/fib.hpp"

// RE Benchmark TU 3304 of 20000 (depth=28, stamp="default")
namespace bench_tu_3304 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3304>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3304

#include "bench/fib.hpp"

// RE Benchmark TU 45 of 20000 (depth=28, stamp="default")
namespace bench_tu_45 {
constexpr unsigned long long result = ::bench::slow_fib<28, 45>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_45

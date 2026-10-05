#include "bench/fib.hpp"

// RE Benchmark TU 6539 of 20000 (depth=28, stamp="default")
namespace bench_tu_6539 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6539>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6539

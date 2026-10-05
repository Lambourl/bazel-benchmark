#include "bench/fib.hpp"

// RE Benchmark TU 10921 of 20000 (depth=28, stamp="default")
namespace bench_tu_10921 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10921>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10921

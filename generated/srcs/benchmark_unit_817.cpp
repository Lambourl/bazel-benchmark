#include "bench/fib.hpp"

// RE Benchmark TU 817 of 20000 (depth=28, stamp="default")
namespace bench_tu_817 {
constexpr unsigned long long result = ::bench::slow_fib<28, 817>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_817

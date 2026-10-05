#include "bench/fib.hpp"

// RE Benchmark TU 10817 of 20000 (depth=28, stamp="default")
namespace bench_tu_10817 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10817>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10817

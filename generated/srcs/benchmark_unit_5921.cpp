#include "bench/fib.hpp"

// RE Benchmark TU 5921 of 20000 (depth=28, stamp="default")
namespace bench_tu_5921 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5921>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5921

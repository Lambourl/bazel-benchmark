#include "bench/fib.hpp"

// RE Benchmark TU 15541 of 20000 (depth=28, stamp="default")
namespace bench_tu_15541 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15541>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15541

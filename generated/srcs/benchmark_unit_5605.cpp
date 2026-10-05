#include "bench/fib.hpp"

// RE Benchmark TU 5605 of 20000 (depth=28, stamp="default")
namespace bench_tu_5605 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5605>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5605

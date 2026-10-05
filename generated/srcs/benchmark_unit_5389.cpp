#include "bench/fib.hpp"

// RE Benchmark TU 5389 of 20000 (depth=28, stamp="default")
namespace bench_tu_5389 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5389>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5389

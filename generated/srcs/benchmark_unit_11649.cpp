#include "bench/fib.hpp"

// RE Benchmark TU 11649 of 20000 (depth=28, stamp="default")
namespace bench_tu_11649 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11649>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11649

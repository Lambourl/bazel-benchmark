#include "bench/fib.hpp"

// RE Benchmark TU 11514 of 20000 (depth=28, stamp="default")
namespace bench_tu_11514 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11514>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11514

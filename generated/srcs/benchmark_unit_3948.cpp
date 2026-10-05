#include "bench/fib.hpp"

// RE Benchmark TU 3948 of 20000 (depth=28, stamp="default")
namespace bench_tu_3948 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3948>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3948

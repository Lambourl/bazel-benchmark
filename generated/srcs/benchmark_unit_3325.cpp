#include "bench/fib.hpp"

// RE Benchmark TU 3325 of 20000 (depth=28, stamp="default")
namespace bench_tu_3325 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3325>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3325

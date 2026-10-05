#include "bench/fib.hpp"

// RE Benchmark TU 11675 of 20000 (depth=28, stamp="default")
namespace bench_tu_11675 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11675>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11675

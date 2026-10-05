#include "bench/fib.hpp"

// RE Benchmark TU 5866 of 20000 (depth=28, stamp="default")
namespace bench_tu_5866 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5866>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5866

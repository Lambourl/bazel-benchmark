#include "bench/fib.hpp"

// RE Benchmark TU 1913 of 20000 (depth=28, stamp="default")
namespace bench_tu_1913 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1913>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1913

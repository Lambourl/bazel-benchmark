#include "bench/fib.hpp"

// RE Benchmark TU 12184 of 20000 (depth=28, stamp="default")
namespace bench_tu_12184 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12184>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12184

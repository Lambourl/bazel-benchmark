#include "bench/fib.hpp"

// RE Benchmark TU 19184 of 20000 (depth=28, stamp="default")
namespace bench_tu_19184 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19184>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19184

#include "bench/fib.hpp"

// RE Benchmark TU 19919 of 20000 (depth=28, stamp="default")
namespace bench_tu_19919 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19919>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19919

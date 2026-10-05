#include "bench/fib.hpp"

// RE Benchmark TU 19707 of 20000 (depth=28, stamp="default")
namespace bench_tu_19707 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19707>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19707

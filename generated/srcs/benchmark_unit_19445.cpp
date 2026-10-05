#include "bench/fib.hpp"

// RE Benchmark TU 19445 of 20000 (depth=28, stamp="default")
namespace bench_tu_19445 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19445>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19445

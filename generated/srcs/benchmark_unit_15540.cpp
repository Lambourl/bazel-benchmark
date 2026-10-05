#include "bench/fib.hpp"

// RE Benchmark TU 15540 of 20000 (depth=28, stamp="default")
namespace bench_tu_15540 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15540>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15540

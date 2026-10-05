#include "bench/fib.hpp"

// RE Benchmark TU 5131 of 20000 (depth=28, stamp="default")
namespace bench_tu_5131 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5131>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5131

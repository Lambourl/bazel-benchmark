#include "bench/fib.hpp"

// RE Benchmark TU 15432 of 20000 (depth=28, stamp="default")
namespace bench_tu_15432 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15432>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15432

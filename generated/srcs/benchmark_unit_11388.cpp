#include "bench/fib.hpp"

// RE Benchmark TU 11388 of 20000 (depth=28, stamp="default")
namespace bench_tu_11388 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11388>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11388

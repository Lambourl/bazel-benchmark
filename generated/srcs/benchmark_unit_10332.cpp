#include "bench/fib.hpp"

// RE Benchmark TU 10332 of 20000 (depth=28, stamp="default")
namespace bench_tu_10332 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10332>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10332

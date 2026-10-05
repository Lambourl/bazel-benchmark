#include "bench/fib.hpp"

// RE Benchmark TU 11410 of 20000 (depth=28, stamp="default")
namespace bench_tu_11410 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11410>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11410

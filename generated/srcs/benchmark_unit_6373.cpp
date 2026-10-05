#include "bench/fib.hpp"

// RE Benchmark TU 6373 of 20000 (depth=28, stamp="default")
namespace bench_tu_6373 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6373>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6373

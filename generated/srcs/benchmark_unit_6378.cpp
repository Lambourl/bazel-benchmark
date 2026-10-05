#include "bench/fib.hpp"

// RE Benchmark TU 6378 of 20000 (depth=28, stamp="default")
namespace bench_tu_6378 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6378>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6378

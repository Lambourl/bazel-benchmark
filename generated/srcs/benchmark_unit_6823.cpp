#include "bench/fib.hpp"

// RE Benchmark TU 6823 of 20000 (depth=28, stamp="default")
namespace bench_tu_6823 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6823>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6823

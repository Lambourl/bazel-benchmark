#include "bench/fib.hpp"

// RE Benchmark TU 12714 of 20000 (depth=28, stamp="default")
namespace bench_tu_12714 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12714>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12714

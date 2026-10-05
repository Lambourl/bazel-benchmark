#include "bench/fib.hpp"

// RE Benchmark TU 6505 of 20000 (depth=28, stamp="default")
namespace bench_tu_6505 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6505>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6505

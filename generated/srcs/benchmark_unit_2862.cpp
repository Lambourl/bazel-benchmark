#include "bench/fib.hpp"

// RE Benchmark TU 2862 of 20000 (depth=28, stamp="default")
namespace bench_tu_2862 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2862>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2862

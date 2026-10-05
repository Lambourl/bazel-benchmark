#include "bench/fib.hpp"

// RE Benchmark TU 10923 of 20000 (depth=28, stamp="default")
namespace bench_tu_10923 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10923>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10923

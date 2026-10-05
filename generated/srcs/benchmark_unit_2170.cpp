#include "bench/fib.hpp"

// RE Benchmark TU 2170 of 20000 (depth=28, stamp="default")
namespace bench_tu_2170 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2170>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2170

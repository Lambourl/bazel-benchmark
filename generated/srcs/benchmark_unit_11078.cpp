#include "bench/fib.hpp"

// RE Benchmark TU 11078 of 20000 (depth=28, stamp="default")
namespace bench_tu_11078 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11078>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11078

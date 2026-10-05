#include "bench/fib.hpp"

// RE Benchmark TU 31 of 20000 (depth=28, stamp="default")
namespace bench_tu_31 {
constexpr unsigned long long result = ::bench::slow_fib<28, 31>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_31

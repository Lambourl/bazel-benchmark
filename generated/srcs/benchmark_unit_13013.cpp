#include "bench/fib.hpp"

// RE Benchmark TU 13013 of 20000 (depth=28, stamp="default")
namespace bench_tu_13013 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13013>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13013

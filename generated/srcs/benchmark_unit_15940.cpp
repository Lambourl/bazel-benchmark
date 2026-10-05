#include "bench/fib.hpp"

// RE Benchmark TU 15940 of 20000 (depth=28, stamp="default")
namespace bench_tu_15940 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15940>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15940

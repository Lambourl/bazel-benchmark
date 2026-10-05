#include "bench/fib.hpp"

// RE Benchmark TU 7844 of 20000 (depth=28, stamp="default")
namespace bench_tu_7844 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7844>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7844

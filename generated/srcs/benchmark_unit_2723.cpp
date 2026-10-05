#include "bench/fib.hpp"

// RE Benchmark TU 2723 of 20000 (depth=28, stamp="default")
namespace bench_tu_2723 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2723>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2723

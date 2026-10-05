#include "bench/fib.hpp"

// RE Benchmark TU 16867 of 20000 (depth=28, stamp="default")
namespace bench_tu_16867 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16867>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16867

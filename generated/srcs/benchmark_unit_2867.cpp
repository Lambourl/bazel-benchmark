#include "bench/fib.hpp"

// RE Benchmark TU 2867 of 20000 (depth=28, stamp="default")
namespace bench_tu_2867 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2867>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2867

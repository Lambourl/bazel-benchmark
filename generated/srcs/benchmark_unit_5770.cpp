#include "bench/fib.hpp"

// RE Benchmark TU 5770 of 20000 (depth=28, stamp="default")
namespace bench_tu_5770 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5770>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5770

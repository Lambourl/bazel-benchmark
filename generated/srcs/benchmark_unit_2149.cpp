#include "bench/fib.hpp"

// RE Benchmark TU 2149 of 20000 (depth=28, stamp="default")
namespace bench_tu_2149 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2149>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2149

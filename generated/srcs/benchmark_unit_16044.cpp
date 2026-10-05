#include "bench/fib.hpp"

// RE Benchmark TU 16044 of 20000 (depth=28, stamp="default")
namespace bench_tu_16044 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16044>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16044

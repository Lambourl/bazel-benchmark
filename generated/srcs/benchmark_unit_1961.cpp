#include "bench/fib.hpp"

// RE Benchmark TU 1961 of 20000 (depth=28, stamp="default")
namespace bench_tu_1961 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1961>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1961

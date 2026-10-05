#include "bench/fib.hpp"

// RE Benchmark TU 16863 of 20000 (depth=28, stamp="default")
namespace bench_tu_16863 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16863>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16863

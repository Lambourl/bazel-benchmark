#include "bench/fib.hpp"

// RE Benchmark TU 15069 of 20000 (depth=28, stamp="default")
namespace bench_tu_15069 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15069>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15069

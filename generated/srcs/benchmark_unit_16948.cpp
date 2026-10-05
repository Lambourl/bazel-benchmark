#include "bench/fib.hpp"

// RE Benchmark TU 16948 of 20000 (depth=28, stamp="default")
namespace bench_tu_16948 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16948>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16948

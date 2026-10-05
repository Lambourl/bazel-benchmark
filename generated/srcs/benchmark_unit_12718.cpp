#include "bench/fib.hpp"

// RE Benchmark TU 12718 of 20000 (depth=28, stamp="default")
namespace bench_tu_12718 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12718>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12718

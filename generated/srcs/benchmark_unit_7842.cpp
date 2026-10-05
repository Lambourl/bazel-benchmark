#include "bench/fib.hpp"

// RE Benchmark TU 7842 of 20000 (depth=28, stamp="default")
namespace bench_tu_7842 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7842>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7842

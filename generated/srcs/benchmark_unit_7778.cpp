#include "bench/fib.hpp"

// RE Benchmark TU 7778 of 20000 (depth=28, stamp="default")
namespace bench_tu_7778 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7778>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7778

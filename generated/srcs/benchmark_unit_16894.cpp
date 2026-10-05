#include "bench/fib.hpp"

// RE Benchmark TU 16894 of 20000 (depth=28, stamp="default")
namespace bench_tu_16894 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16894>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16894

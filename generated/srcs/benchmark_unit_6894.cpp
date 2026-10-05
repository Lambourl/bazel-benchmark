#include "bench/fib.hpp"

// RE Benchmark TU 6894 of 20000 (depth=28, stamp="default")
namespace bench_tu_6894 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6894>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6894

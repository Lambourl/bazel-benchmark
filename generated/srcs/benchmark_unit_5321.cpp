#include "bench/fib.hpp"

// RE Benchmark TU 5321 of 20000 (depth=28, stamp="default")
namespace bench_tu_5321 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5321>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5321

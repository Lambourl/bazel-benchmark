#include "bench/fib.hpp"

// RE Benchmark TU 14995 of 20000 (depth=28, stamp="default")
namespace bench_tu_14995 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14995>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14995

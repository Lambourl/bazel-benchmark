#include "bench/fib.hpp"

// RE Benchmark TU 6677 of 20000 (depth=28, stamp="default")
namespace bench_tu_6677 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6677>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6677

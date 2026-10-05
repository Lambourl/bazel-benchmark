#include "bench/fib.hpp"

// RE Benchmark TU 11733 of 20000 (depth=28, stamp="default")
namespace bench_tu_11733 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11733>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11733

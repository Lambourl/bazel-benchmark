#include "bench/fib.hpp"

// RE Benchmark TU 733 of 20000 (depth=28, stamp="default")
namespace bench_tu_733 {
constexpr unsigned long long result = ::bench::slow_fib<28, 733>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_733

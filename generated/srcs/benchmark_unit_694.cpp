#include "bench/fib.hpp"

// RE Benchmark TU 694 of 20000 (depth=28, stamp="default")
namespace bench_tu_694 {
constexpr unsigned long long result = ::bench::slow_fib<28, 694>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_694

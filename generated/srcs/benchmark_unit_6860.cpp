#include "bench/fib.hpp"

// RE Benchmark TU 6860 of 20000 (depth=28, stamp="default")
namespace bench_tu_6860 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6860>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6860

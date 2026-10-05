#include "bench/fib.hpp"

// RE Benchmark TU 8141 of 20000 (depth=28, stamp="default")
namespace bench_tu_8141 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8141>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8141

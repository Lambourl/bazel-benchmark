#include "bench/fib.hpp"

// RE Benchmark TU 4142 of 20000 (depth=28, stamp="default")
namespace bench_tu_4142 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4142>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4142

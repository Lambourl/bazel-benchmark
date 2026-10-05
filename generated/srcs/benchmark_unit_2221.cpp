#include "bench/fib.hpp"

// RE Benchmark TU 2221 of 20000 (depth=28, stamp="default")
namespace bench_tu_2221 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2221>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2221

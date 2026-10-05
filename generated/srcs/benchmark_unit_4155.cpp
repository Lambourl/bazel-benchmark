#include "bench/fib.hpp"

// RE Benchmark TU 4155 of 20000 (depth=28, stamp="default")
namespace bench_tu_4155 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4155>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4155

#include "bench/fib.hpp"

// RE Benchmark TU 13002 of 20000 (depth=28, stamp="default")
namespace bench_tu_13002 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13002>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13002

#include "bench/fib.hpp"

// RE Benchmark TU 6169 of 20000 (depth=28, stamp="default")
namespace bench_tu_6169 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6169>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6169

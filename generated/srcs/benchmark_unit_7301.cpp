#include "bench/fib.hpp"

// RE Benchmark TU 7301 of 20000 (depth=28, stamp="default")
namespace bench_tu_7301 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7301>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7301

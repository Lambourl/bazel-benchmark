#include "bench/fib.hpp"

// RE Benchmark TU 13006 of 20000 (depth=28, stamp="default")
namespace bench_tu_13006 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13006>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13006

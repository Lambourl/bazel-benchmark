#include "bench/fib.hpp"

// RE Benchmark TU 14006 of 20000 (depth=28, stamp="default")
namespace bench_tu_14006 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14006>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14006

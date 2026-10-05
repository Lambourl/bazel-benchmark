#include "bench/fib.hpp"

// RE Benchmark TU 14010 of 20000 (depth=28, stamp="default")
namespace bench_tu_14010 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14010>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14010

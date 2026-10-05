#include "bench/fib.hpp"

// RE Benchmark TU 14074 of 20000 (depth=28, stamp="default")
namespace bench_tu_14074 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14074>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14074

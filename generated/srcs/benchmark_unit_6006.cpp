#include "bench/fib.hpp"

// RE Benchmark TU 6006 of 20000 (depth=28, stamp="default")
namespace bench_tu_6006 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6006>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6006

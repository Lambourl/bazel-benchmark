#include "bench/fib.hpp"

// RE Benchmark TU 17003 of 20000 (depth=28, stamp="default")
namespace bench_tu_17003 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17003>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17003

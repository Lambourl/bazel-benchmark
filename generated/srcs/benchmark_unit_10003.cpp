#include "bench/fib.hpp"

// RE Benchmark TU 10003 of 20000 (depth=28, stamp="default")
namespace bench_tu_10003 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10003>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10003

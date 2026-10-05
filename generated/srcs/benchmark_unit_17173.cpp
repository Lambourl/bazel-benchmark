#include "bench/fib.hpp"

// RE Benchmark TU 17173 of 20000 (depth=28, stamp="default")
namespace bench_tu_17173 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17173>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17173

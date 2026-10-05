#include "bench/fib.hpp"

// RE Benchmark TU 7262 of 20000 (depth=28, stamp="default")
namespace bench_tu_7262 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7262>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7262

#include "bench/fib.hpp"

// RE Benchmark TU 1232 of 20000 (depth=28, stamp="default")
namespace bench_tu_1232 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1232>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1232

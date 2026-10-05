#include "bench/fib.hpp"

// RE Benchmark TU 1390 of 20000 (depth=28, stamp="default")
namespace bench_tu_1390 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1390>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1390

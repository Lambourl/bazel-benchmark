#include "bench/fib.hpp"

// RE Benchmark TU 1079 of 20000 (depth=28, stamp="default")
namespace bench_tu_1079 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1079>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1079

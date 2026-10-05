#include "bench/fib.hpp"

// RE Benchmark TU 1141 of 20000 (depth=28, stamp="default")
namespace bench_tu_1141 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1141>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1141

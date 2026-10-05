#include "bench/fib.hpp"

// RE Benchmark TU 14079 of 20000 (depth=28, stamp="default")
namespace bench_tu_14079 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14079>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14079

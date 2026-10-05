#include "bench/fib.hpp"

// RE Benchmark TU 8076 of 20000 (depth=28, stamp="default")
namespace bench_tu_8076 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8076>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8076

#include "bench/fib.hpp"

// RE Benchmark TU 4558 of 20000 (depth=28, stamp="default")
namespace bench_tu_4558 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4558>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4558

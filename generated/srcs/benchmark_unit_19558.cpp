#include "bench/fib.hpp"

// RE Benchmark TU 19558 of 20000 (depth=28, stamp="default")
namespace bench_tu_19558 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19558>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19558

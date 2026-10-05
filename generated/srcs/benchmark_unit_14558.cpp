#include "bench/fib.hpp"

// RE Benchmark TU 14558 of 20000 (depth=28, stamp="default")
namespace bench_tu_14558 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14558>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14558

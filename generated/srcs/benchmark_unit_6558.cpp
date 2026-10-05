#include "bench/fib.hpp"

// RE Benchmark TU 6558 of 20000 (depth=28, stamp="default")
namespace bench_tu_6558 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6558>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6558

#include "bench/fib.hpp"

// RE Benchmark TU 558 of 20000 (depth=28, stamp="default")
namespace bench_tu_558 {
constexpr unsigned long long result = ::bench::slow_fib<28, 558>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_558

#include "bench/fib.hpp"

// RE Benchmark TU 697 of 20000 (depth=28, stamp="default")
namespace bench_tu_697 {
constexpr unsigned long long result = ::bench::slow_fib<28, 697>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_697

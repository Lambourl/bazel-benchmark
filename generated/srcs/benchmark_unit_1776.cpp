#include "bench/fib.hpp"

// RE Benchmark TU 1776 of 20000 (depth=28, stamp="default")
namespace bench_tu_1776 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1776>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1776

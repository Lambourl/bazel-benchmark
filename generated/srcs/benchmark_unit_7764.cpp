#include "bench/fib.hpp"

// RE Benchmark TU 7764 of 20000 (depth=28, stamp="default")
namespace bench_tu_7764 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7764>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7764

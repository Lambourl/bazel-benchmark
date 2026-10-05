#include "bench/fib.hpp"

// RE Benchmark TU 7960 of 20000 (depth=28, stamp="default")
namespace bench_tu_7960 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7960>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7960

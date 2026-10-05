#include "bench/fib.hpp"

// RE Benchmark TU 5552 of 20000 (depth=28, stamp="default")
namespace bench_tu_5552 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5552>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5552

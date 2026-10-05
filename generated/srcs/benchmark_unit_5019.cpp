#include "bench/fib.hpp"

// RE Benchmark TU 5019 of 20000 (depth=28, stamp="default")
namespace bench_tu_5019 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5019>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5019

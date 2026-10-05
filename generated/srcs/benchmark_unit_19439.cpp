#include "bench/fib.hpp"

// RE Benchmark TU 19439 of 20000 (depth=28, stamp="default")
namespace bench_tu_19439 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19439>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19439

#include "bench/fib.hpp"

// RE Benchmark TU 11518 of 20000 (depth=28, stamp="default")
namespace bench_tu_11518 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11518>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11518

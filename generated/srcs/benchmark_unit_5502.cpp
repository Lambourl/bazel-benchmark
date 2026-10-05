#include "bench/fib.hpp"

// RE Benchmark TU 5502 of 20000 (depth=28, stamp="default")
namespace bench_tu_5502 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5502>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5502

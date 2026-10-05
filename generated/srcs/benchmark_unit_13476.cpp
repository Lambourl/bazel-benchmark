#include "bench/fib.hpp"

// RE Benchmark TU 13476 of 20000 (depth=28, stamp="default")
namespace bench_tu_13476 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13476>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13476

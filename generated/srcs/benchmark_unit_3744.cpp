#include "bench/fib.hpp"

// RE Benchmark TU 3744 of 20000 (depth=28, stamp="default")
namespace bench_tu_3744 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3744>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3744

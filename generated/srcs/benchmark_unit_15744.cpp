#include "bench/fib.hpp"

// RE Benchmark TU 15744 of 20000 (depth=28, stamp="default")
namespace bench_tu_15744 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15744>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15744

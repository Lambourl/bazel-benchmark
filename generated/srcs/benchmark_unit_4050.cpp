#include "bench/fib.hpp"

// RE Benchmark TU 4050 of 20000 (depth=28, stamp="default")
namespace bench_tu_4050 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4050>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4050

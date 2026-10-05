#include "bench/fib.hpp"

// RE Benchmark TU 75 of 20000 (depth=28, stamp="default")
namespace bench_tu_75 {
constexpr unsigned long long result = ::bench::slow_fib<28, 75>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_75

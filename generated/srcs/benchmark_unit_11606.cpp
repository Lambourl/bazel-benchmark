#include "bench/fib.hpp"

// RE Benchmark TU 11606 of 20000 (depth=28, stamp="default")
namespace bench_tu_11606 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11606>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11606
